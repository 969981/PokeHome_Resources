/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064ed8c; name: FUN_.text__0064ed8c
 */


undefined4 FUN__text__0064ed8c(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong local_50;
  char local_48 [4];
  int local_44;
  
  if (param_1 == 0) {
    uVar4 = 0x2b;
  }
  else {
    if (*(undefined1 **)(param_1 + 0x678) != (undefined1 *)0x0) {
      **(undefined1 **)(param_1 + 0x678) = 0;
    }
    if (*(long *)(param_1 + 0xd8) == 0) {
      lVar6 = *(long *)(param_1 + 0xe0);
      if (lVar6 == 0) {
        lVar6 = FUN__text__00659d20(1,3);
        if (lVar6 == 0) {
          return 0x1b;
        }
        *(long *)(param_1 + 0xe0) = lVar6;
      }
      if (*(char *)(lVar6 + 0x1e0) == '\0') {
        FUN__text__0065c4cc(lVar6,6,*(undefined8 *)(param_1 + 0xed8));
        iVar2 = FUN__text__00659e30(lVar6,param_1);
        if (iVar2 == 0) {
          *(long *)(param_1 + 0xd8) = lVar6;
          uVar4 = 0;
          do {
            local_44 = 0;
            local_48[0] = '\0';
            iVar2 = FUN__text__0065ac98(lVar6,0,0,1000,0,local_48);
            if (iVar2 != 0) {
              uVar4 = 0x1b;
              if (iVar2 != 3) {
                uVar4 = 0x2b;
              }
              goto LAB__text__0064ef30;
            }
            if (local_48[0] == '\0') {
              local_50 = 0;
              FUN__text__0065c9f0(lVar6,&local_50);
              if (local_50 != 0) {
                if (1000 < (long)local_50) {
                  local_50 = 1000;
                }
                FUN__text__00666ab4(local_50);
              }
            }
            iVar2 = FUN__text__0065b0ac(lVar6,&local_44);
            if (iVar2 == 0 && local_44 == 0) {
              local_50 = local_50 & 0xffffffff00000000;
              lVar3 = FUN__text__0065c3b4(lVar6,&local_50);
              bVar1 = lVar3 != 0;
              if (lVar3 != 0) {
                uVar4 = *(undefined4 *)(lVar3 + 0x10);
              }
            }
            else {
              bVar1 = false;
            }
          } while ((iVar2 == 0) && (!bVar1));
          uVar5 = 0x1b;
          if (iVar2 != 3) {
            uVar5 = 0x2b;
          }
          if (iVar2 != 0) {
            uVar4 = uVar5;
          }
LAB__text__0064ef30:
          FUN__text__0065a2b8(lVar6,param_1);
        }
        else {
          FUN__text__0065c29c(lVar6);
          uVar4 = 0x1b;
          if (iVar2 != 3) {
            uVar4 = 2;
          }
        }
      }
      else {
        uVar4 = 0x5d;
      }
    }
    else {
      FUN__text__0066713c(param_1,0x7107ab);
      uVar4 = 2;
    }
  }
  return uVar4;
}


