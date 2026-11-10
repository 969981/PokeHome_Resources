/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014f834; name: FUN_.text__0014f834
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014f834(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  iVar1 = *(int *)(param_1 + 0x260);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 600) + 0xe0);
  local_68 = 0xf83cdac6d02da449;
  uStack_60 = 0x70b717;
  local_58 = 0x12;
  FUN__text__005e927c(auStack_50,&local_68);
  lVar3 = FUN__text__005a1ad0(uVar5,(long)iVar1,auStack_50);
  if (lVar3 == 0) {
    pfVar4 = (float *)0x0;
    lVar3 = 0;
  }
  else {
    iVar1 = *_DAT_008a0300;
    *(int *)(lVar3 + 0x138) = iVar1;
    FUN__text__005b52c0(*_DAT_0089f418,lVar3);
    lVar3 = lVar3 + (long)iVar1 * 0x70 + 0x58;
    pfVar4 = (float *)thunk_FUN__text__006ec5f4(lVar3);
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  plVar2 = _DAT_0089f5b8;
  if (pfVar4 != (float *)0x0) {
    fVar6 = *(float *)(*_DAT_0089f5b8 + 0x85a4);
    *pfVar4 = fVar6;
    if (fVar6 < 1.0) {
      fVar6 = fVar6 - *(float *)(_DAT_008a0230 + (long)*(int *)(*plVar2 + 0x70) * 4);
      *pfVar4 = fVar6;
    }
    pfVar4[1] = fVar6 + -1.0;
    pfVar4[2] = 1.0 / fVar6;
  }
  if (lVar3 != 0) {
    thunk_FUN__text__006ec608(lVar3);
  }
  FUN__text__005a2ae0(param_1);
  return;
}


