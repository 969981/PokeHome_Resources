/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023c05c; name: FUN_.text__0023c05c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0023c05c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long local_58;
  long local_38;
  
  lVar4 = *(long *)(*_DAT_0089f4f0 + 0x80);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar4 + 0x2e8);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  lVar4 = *(long *)(param_1 + 0x650);
  local_58 = 0x6bfadd912f4151fb;
  iVar1 = *(int *)(lVar4 + 0x20);
  FUN__text__003c7c60(param_2,&local_58,iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = 0;
    if ((local_58 != -0x340d631b7bddd9bb) && (local_58 != 0)) {
      local_38 = local_58;
      uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_38);
    }
    FUN__text__003c3378(lVar3,(int *)(lVar4 + 0x20),0,uVar2,0,0);
  }
  iVar1 = *(int *)(lVar4 + 0x3c);
  local_58 = 0x6bfadc912f415048;
  FUN__text__003c7c60(param_2,&local_58,iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = 0;
    if ((local_58 != -0x340d631b7bddd9bb) && (local_58 != 0)) {
      local_38 = local_58;
      uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_38);
    }
    FUN__text__003c3378(lVar3,(int *)(lVar4 + 0x3c),0,uVar2,0,0);
  }
  iVar1 = *(int *)(lVar4 + 0x58);
  local_58 = 0x6bfadf912f415561;
  FUN__text__003c7c60(param_2,&local_58,iVar1 != 0);
  if (iVar1 != 0) {
    uVar2 = 0;
    if ((local_58 != -0x340d631b7bddd9bb) && (local_58 != 0)) {
      local_38 = local_58;
      uVar2 = FUN__text__00155100(*(undefined8 *)(param_1 + 0x2d0),&local_38);
    }
    FUN__text__003c3378(lVar3,(int *)(lVar4 + 0x58),0,uVar2,0,0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


