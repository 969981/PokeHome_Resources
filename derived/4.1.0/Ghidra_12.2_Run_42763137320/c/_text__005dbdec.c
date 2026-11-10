/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005dbdec; name: FUN_.text__005dbdec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005dbdec(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long local_28;
  
  puVar3 = _DAT_0089f5d0;
  if (*(char *)(param_1 + 0xa9) != '\0') {
    return 0;
  }
  plVar7 = (long *)(param_1 + 0x98);
  puVar8 = (undefined8 *)(param_1 + 0x70);
  puVar1 = _DAT_0089f5d0;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
  }
  puVar6 = puVar8;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar6 = puVar1;
  }
  lVar5 = 0;
  if (*plVar7 != -1) {
    lVar5 = *plVar7;
  }
  nn::fs::CreateFile((char *)*puVar6,lVar5);
  puVar6 = (undefined8 *)(param_1 + 0x90);
  puVar1 = puVar3;
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
  }
  puVar2 = puVar8;
  if (*(long *)(param_1 + 0x78) != 0) {
    puVar2 = puVar1;
  }
  if (*(char *)(param_1 + 0xa8) == '\0') {
    uVar4 = nn::fs::OpenFile((FileHandle *)puVar6,(char *)*puVar2,2);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined1 *)(param_1 + 0xa9) = 1;
    nn::fs::GetFileSize(&local_28,*(undefined8 *)(param_1 + 0x90));
    lVar5 = *(long *)(param_1 + 0x98);
    if (lVar5 == -1) {
      *plVar7 = local_28;
      return 0;
    }
    if (local_28 <= lVar5) {
      if (lVar5 <= local_28) {
        return 0;
      }
      FUN__text__005dc014(param_1);
      puVar1 = puVar3;
      if (*(long *)(param_1 + 0x60) != 0) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
      }
      puVar2 = puVar8;
      if (*(long *)(param_1 + 0x78) != 0) {
        puVar2 = puVar1;
      }
      uVar4 = nn::fs::DeleteFile((char *)*puVar2);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      puVar1 = puVar3;
      if (*(long *)(param_1 + 0x60) != 0) {
        puVar1 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
      }
      puVar2 = puVar8;
      if (*(long *)(param_1 + 0x78) != 0) {
        puVar2 = puVar1;
      }
      nn::fs::CreateFile((char *)*puVar2,*(long *)(param_1 + 0x98));
      if (*(long *)(param_1 + 0x60) != 0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x60) + 0x60);
      }
      if (*(long *)(param_1 + 0x78) != 0) {
        puVar8 = puVar3;
      }
      uVar4 = nn::fs::OpenFile((FileHandle *)puVar6,(char *)*puVar8,2);
      *(bool *)(param_1 + 0xa9) = (int)uVar4 == 0;
      return uVar4;
    }
    uVar4 = *puVar6;
  }
  else {
    uVar4 = nn::fs::OpenFile((FileHandle *)puVar6,(char *)*puVar2,6);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined1 *)(param_1 + 0xa9) = 1;
    uVar4 = *(undefined8 *)(param_1 + 0x90);
    if (*(long *)(param_1 + 0x98) == -1) {
      nn::fs::GetFileSize(plVar7,uVar4);
      FUN__text__005dc04c(param_1,0,2);
      return 0;
    }
  }
  nn::fs::SetFileSize(uVar4);
  return 0;
}


