/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00477740; name: FUN_.text__00477740
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00477740(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  char local_3c [4];
  undefined8 local_38;
  
  lVar2 = _DAT_008a46e8 + 0x10;
  param_1[0xd] = _DAT_008a46e8 + 0xe0;
  *param_1 = lVar2;
  local_3c[0] = '\x01';
  if ((int)param_1[0x3d] != 0) {
    puVar3 = (undefined8 *)param_1[0x3c];
    do {
      FUN__text__00432ba0(param_1 + 0xb,puVar3[2],local_3c);
      if (local_3c[0] == '\0') {
        FUN__text__00433930(param_1,*puVar3);
      }
      puVar3 = puVar3 + 3;
    } while (puVar3 != (undefined8 *)(param_1[0x3c] + (ulong)*(uint *)(param_1 + 0x3d) * 0x18));
    lVar2 = *param_1;
  }
  *(undefined4 *)(param_1 + 0x3d) = 0;
  local_38 = (**(code **)(lVar2 + 0x38))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  FUN__text__0046c3b0(param_1,&local_38,uVar1 & 1);
  FUN__text__00433a20(param_1);
  if (param_1[0x35] != 0) {
    *(undefined4 *)(param_1 + 0x36) = 0;
    FUN__text__00400fc0(0);
    param_1[0x35] = 0;
    *(undefined4 *)((long)param_1 + 0x1b4) = 0;
  }
  if (param_1[0x37] != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN__text__00400fc0(0);
    param_1[0x37] = 0;
    *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  }
  puVar3 = (undefined8 *)param_1[0x3f];
  if (puVar3 != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 0x40) != 0) {
      lVar2 = (ulong)*(uint *)(param_1 + 0x40) * 0x88;
      do {
        (**(code **)*puVar3)(puVar3);
        lVar2 = lVar2 + -0x88;
        puVar3 = puVar3 + 0x11;
      } while (lVar2 != 0);
      puVar3 = (undefined8 *)param_1[0x3f];
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN__text__00400fc0(0,puVar3);
    param_1[0x3f] = 0;
    *(undefined4 *)((long)param_1 + 0x204) = 0;
  }
  if (param_1[0x3c] != 0) {
    *(undefined4 *)(param_1 + 0x3d) = 0;
    FUN__text__00400fc0(0);
    param_1[0x3c] = 0;
    *(undefined4 *)((long)param_1 + 0x1ec) = 0;
  }
  FUN__text__0047b380(param_1 + 0x31);
  if (param_1[0x1e] != 0) {
    *(undefined4 *)(param_1 + 0x1f) = 0;
    FUN__text__00400fc0(0);
    param_1[0x1e] = 0;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
  }
  FUN__text__00458c80(param_1 + 0xf);
  FUN__text__0046bd8c(param_1);
  return;
}


