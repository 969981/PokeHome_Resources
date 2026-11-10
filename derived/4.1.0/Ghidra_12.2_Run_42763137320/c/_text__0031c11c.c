/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031c11c; name: FUN_.text__0031c11c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN__text__0031c11c(long param_1,long param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  ulong local_60;
  long local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 local_28;
  
  if (param_1 == 0) {
    lVar4 = 0;
    uVar3 = 0x16;
    goto LAB__text__0031c1b0;
  }
  uStack_50 = 0;
  local_78 = 0;
  local_88 = _DAT_008a2a60 + 0x10;
  local_60 = 0;
  local_28 = 0;
  local_80 = 0;
  lStack_70 = param_1;
  local_68 = param_2;
  local_58 = param_1;
  local_48 = param_2;
  uVar3 = FUN__text__003d9788(&local_28,param_4);
  if (((int)uVar3 == 0) && (uVar3 = FUN__text__003d986c(&local_28,&local_88), (int)uVar3 == 0)) {
    FUN__text__0031c290(&local_28,param_3);
    iVar2 = FUN__text__003d9770(&local_28);
    if (iVar2 == 0) {
      uVar3 = FUN__text__003d9688(&local_28);
      if ((int)uVar3 != 0) goto LAB__text__0031c190;
      cVar1 = *param_4;
      lVar4 = local_78 + local_80;
      FUN__text__003d6ca8(&local_88);
      if (cVar1 == '\0') {
        if (lVar4 == param_2) {
          uVar3 = local_60 & 0xffffffff;
          lVar4 = param_2;
        }
        else {
          uVar3 = 0;
          *(undefined1 *)(param_1 + lVar4) = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      iVar2 = FUN__text__003d9770(&local_28);
      if (iVar2 - 0xcU < 2) {
        uVar3 = 0x16;
        lVar4 = 0;
      }
      else if (iVar2 == 9) {
        uVar3 = 0xc;
        lVar4 = 0;
      }
      else {
        uVar3 = local_60;
        if (iVar2 == 8) goto LAB__text__0031c190;
        uVar3 = 0x54;
        lVar4 = 0;
      }
    }
  }
  else {
LAB__text__0031c190:
    uVar3 = uVar3 & 0xffffffff;
    lVar4 = 0;
  }
  FUN__text__003d9590(&local_28);
  FUN__text__003d6ca8(&local_88);
LAB__text__0031c1b0:
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}


