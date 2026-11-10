/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005557f0; name: FUN_.text__005557f0
 */


int FUN__text__005557f0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  iVar4 = FUN__text__005567b0();
  if (iVar4 == 1) {
    iVar4 = FUN__text__00554cd0(param_1,param_2,*(undefined4 *)(param_1 + 0x28),2,1,0);
    if (*(uint *)(param_1 + 0x20) != 0) {
      lVar6 = (**(code **)(*param_2 + 0x10))
                        (param_2,(ulong)*(uint *)(param_1 + 0x20) * 0x60,0x71d13c,0x29);
      *(long *)(param_1 + 0x40) = lVar6;
      if (lVar6 == 0) {
        iVar4 = 0x34;
      }
      else {
        uVar8 = (ulong)*(uint *)(param_1 + 0x20);
        if (*(uint *)(param_1 + 0x20) != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            if (*(long *)(param_1 + 0x40) != 0) {
              puVar1 = (undefined8 *)(*(long *)(param_1 + 0x40) + lVar6);
              puVar1[10] = 0;
              puVar1[0xb] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              puVar1[4] = 0;
              puVar1[5] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              uVar8 = (ulong)*(uint *)(param_1 + 0x20);
            }
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x60;
          } while (uVar7 < uVar8);
          if (uVar8 != 0) {
            lVar6 = 0;
            uVar8 = 0;
            do {
              lVar2 = *(long *)(param_1 + 0x40) + lVar6;
              uVar3 = *(undefined4 *)(param_1 + 0x28);
              iVar5 = FUN__text__0054f9a0(lVar2,param_2,uVar3);
              if ((((iVar5 != 1) ||
                   (iVar5 = FUN__text__00556b40(lVar2 + 0x30,param_2,uVar3), iVar5 != 1)) ||
                  (iVar5 = FUN__text__00556b40(lVar2 + 0x40,param_2,uVar3), iVar5 != 1)) ||
                 (iVar5 = FUN__text__00556b40(lVar2 + 0x50,param_2,uVar3), iVar5 != 1)) {
                return iVar5;
              }
              uVar8 = uVar8 + 1;
              lVar6 = lVar6 + 0x60;
            } while (uVar8 < *(uint *)(param_1 + 0x20));
          }
        }
      }
    }
  }
  return iVar4;
}


