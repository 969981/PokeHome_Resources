/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00607750; name: FUN_.text__00607750
 */


void FUN__text__00607750(ushort *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  uint uVar11;
  
  uVar5 = FUN__text__006029e4(param_2 & 0xffff);
  uVar6 = FUN__text__00602a78(param_2,param_3,param_4);
  uVar7 = FUN__text__00602b10(param_2,param_5);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar4 = FUN__text__005ffc50(uVar5,uVar6,2);
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      uVar8 = FUN__text__005ffce8(uVar5,uVar6,uVar11,2);
      if (uVar7 < (uVar8 & 0xffff)) {
        return;
      }
      uVar8 = FUN__text__00600044(uVar5,uVar6,uVar11,2);
      if (uVar8 != *param_1) {
        uVar1 = param_1[1];
        if (uVar8 != uVar1) {
          uVar2 = param_1[2];
          if (uVar8 != uVar2) {
            uVar3 = param_1[3];
            if (uVar8 != uVar3) {
              if (*param_1 == 0) {
                lVar10 = 0;
LAB__text__006077d8:
                puVar9 = param_1 + lVar10;
              }
              else {
                if (uVar1 == 0) {
                  lVar10 = 1;
                  goto LAB__text__006077d8;
                }
                if (uVar2 == 0) {
                  lVar10 = 2;
                  goto LAB__text__006077d8;
                }
                if (uVar3 == 0) {
                  lVar10 = 3;
                  goto LAB__text__006077d8;
                }
                *param_1 = uVar1;
                param_1[1] = uVar2;
                param_1[2] = uVar3;
                puVar9 = param_1 + 3;
              }
              *puVar9 = (ushort)uVar8;
            }
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar4 != uVar11);
  }
  return;
}


