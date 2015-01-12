function lifeMatrix(orig,countStep)

orig %displays the starting matrix

newmat=orig;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

for r=1:size(orig,1)                            %outer loops
    for c=1:size(orig,2)                        %outer loops 
        if r==1 && c==1                         %%%%%checks UL corner%%%%%%
            specialSumThis=orig(1:2,1:2);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(1,1)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
         
        if r==1 && c==size(orig,2)              %%%%%checks UR corner%%%%%
            specialSumThis=orig(1:2,end-1:end);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if r==size(orig,1) && c==1              %%%%%checks BL corner%%%%%
            specialSumThis=orig(end-1:end,1:2);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if r==size(orig,1) && c==size(orig,2)   %%%%%checks BR corner%%%%%
            specialSumThis=orig(end-1:end,end-1:end);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if r==1 && c~=1 && c~=size(orig,2)         %%%%%checks top row%%%%%
            specialSumThis=orig(1:2,c-1:c+1);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if r==size(orig,1) && c~=1 && c~=size(orig,2) %%%%%checks bottom row%%%%%
            specialSumThis=orig(end-1:end,c-1:c+1);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if c==1 && r~=1 && r~=size(orig,1)          %%%%%checks left column%%%%%
            specialSumThis=orig(r-1:r+1,1:2);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if c==size(orig,2) && r~=1 && r~=size(orig,1) %%%%%checks right column%%%%%
            specialSumThis=orig(r-1:r+1,end-1:end);       %takes submatrix
            specialCheck=sum(sum(specialSumThis))-orig(r,c);   %sums ones
            if specialCheck<2 && orig(r,c)==1                   %rule 1
                newmat(r,c)=0;
            elseif (specialCheck==2 || specialCheck==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif specialCheck>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && specialCheck==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0                     %if dead, stay dead
                newmat(r,c)=0;
            end
        end
        
        if c~=1 && c~=size(orig,2) && r~=1 && r ~=size(orig,1) %%%%%all other points%%%%%
            sumThisMat=orig(r-1:r+1,c-1:c+1);    %takes 3 x 3 submatrix
            checkThis=sum(sum(sumThisMat))-orig(r,c);
            if checkThis<2 && orig(r,c)==1                  %rule 1
                newmat(r,c)=0;
            elseif (checkThis==2 || checkThis==3) && orig(r,c)==1 %rule 2
                newmat(r,c)=1;
            elseif checkThis>3 && orig(r,c)==1              %rule 3
                newmat(r,c)=0;
            elseif orig(r,c)==0 && checkThis==3 %rule 4
                newmat(r,c)=1;
            elseif orig(r,c)==0
                newmat(r,c)=0;
            end
        end
    end
end

final=newmat

orig=final;

inputString=['You have taken ', num2str(countStep) ' steps. Go again? '];

goAgain=input(inputString, 's');

if sum(goAgain)==sum('yes')
    countStep=countStep+1;
    lifeMatrix(orig,countStep) 
else
    disp('Thanks for playing!')
end

end
