/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a6010; name: FUN_.text__003a6010
 */


void FUN__text__003a6010(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float extraout_var;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  iVar2 = 0xd2;
  if (0 < *(int *)(param_1 + 0x290)) {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                      (*(long **)(param_1 + 0x98),param_1 + 0xa8,*(undefined8 *)(param_1 + 0x1f0));
    if (iVar2 < 0xd3) {
      iVar2 = 0xd2;
    }
    if (1 < *(int *)(param_1 + 0x290)) {
      iVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                        (*(long **)(param_1 + 0x98),param_1 + 0xb8,*(undefined8 *)(param_1 + 0x1f8))
      ;
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      iVar2 = iVar3;
      if (2 < *(int *)(param_1 + 0x290)) {
        iVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                          (*(long **)(param_1 + 0x98),param_1 + 200,*(undefined8 *)(param_1 + 0x200)
                          );
        if (iVar2 <= iVar3) {
          iVar2 = iVar3;
        }
        if (3 < *(int *)(param_1 + 0x290)) {
          iVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                            (*(long **)(param_1 + 0x98),param_1 + 0xd8,
                             *(undefined8 *)(param_1 + 0x208));
          if (iVar3 <= iVar2) {
            iVar3 = iVar2;
          }
          iVar2 = iVar3;
          if (4 < *(int *)(param_1 + 0x290)) {
            iVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                              (*(long **)(param_1 + 0x98),param_1 + 0xe8,
                               *(undefined8 *)(param_1 + 0x210));
            if (iVar2 <= iVar3) {
              iVar2 = iVar3;
            }
            if (5 < *(int *)(param_1 + 0x290)) {
              iVar3 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                                (*(long **)(param_1 + 0x98),param_1 + 0xf8,
                                 *(undefined8 *)(param_1 + 0x218));
              if (iVar3 <= iVar2) {
                iVar3 = iVar2;
              }
              iVar2 = iVar3;
              if (6 < *(int *)(param_1 + 0x290)) {
                iVar2 = (**(code **)(**(long **)(param_1 + 0x98) + 0xf0))
                                  (*(long **)(param_1 + 0x98),param_1 + 0x108,
                                   *(undefined8 *)(param_1 + 0x220));
                if (iVar2 <= iVar3) {
                  iVar2 = iVar3;
                }
                if (7 < *(int *)(param_1 + 0x290)) {
                    /* WARNING: Subroutine does not return */
                  FUN__text__0011a180(0x717b65);
                }
              }
            }
          }
        }
      }
    }
  }
  lVar1 = param_1 + 0x120;
  if (*(char *)(param_1 + 0x488) != '\0') {
    iVar2 = *(int *)(param_1 + 0x484);
  }
  piVar4 = (int *)(**(code **)(**(long **)(param_1 + 0x98) + 0xf8))
                            (*(long **)(param_1 + 0x98),lVar1,0x71b939);
  local_40 = CONCAT44(local_40._4_4_,(float)(*piVar4 + iVar2));
  (**(code **)(**(long **)(param_1 + 0x98) + 0x50))(*(long **)(param_1 + 0x98),param_1 + 0xa8);
  piVar4 = (int *)(**(code **)(**(long **)(param_1 + 0x98) + 0xf8))
                            (*(long **)(param_1 + 0x98),lVar1,0x71a1fb);
  local_40 = CONCAT44((float)*piVar4 + (float)*(int *)(param_1 + 0x290) * extraout_var,
                      (undefined4)local_40);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x48))(*(long **)(param_1 + 0x98),lVar1,&local_40);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
            (*(long **)(param_1 + 0x98),param_1 + 0x128,&local_40);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x50))(*(long **)(param_1 + 0x98),param_1 + 0x130);
  _local_50 = CONCAT44(extraout_var_00,(undefined4)local_40);
  uStack_48 = extraout_var_01;
  (**(code **)(**(long **)(param_1 + 0x98) + 0x48))
            (*(long **)(param_1 + 0x98),param_1 + 0x130,&local_50);
  return;
}


