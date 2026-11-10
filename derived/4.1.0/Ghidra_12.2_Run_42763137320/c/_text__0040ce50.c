/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0040ce50; name: FUN_.text__0040ce50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN__text__0040ce50(void *param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long local_50;
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  pcVar2 = _DAT_008a45a0;
  if (*_DAT_008a45a0 != '\0') {
    return 0x65;
  }
  FUN__text__0041eac4();
  puVar6 = _DAT_008a4618;
  puVar5 = _DAT_008a4610;
  *_DAT_008a4608 = 3;
  *puVar5 = 3;
  *puVar6 = 3;
  *_DAT_008a4620 = 0;
  uVar8 = FUN__text__00400f10();
  puVar3 = _DAT_008a45b0;
  if ((uVar8 & 1) == 0) {
    return 0x4a;
  }
  if (*_DAT_008a43d8 == 0) {
    return 0x4b;
  }
  if (param_1 == (void *)0x0) {
    *_DAT_008a45b0 = 0;
    puVar3[1] = 0x40000000000ff;
    *(undefined1 *)(puVar3 + 2) = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    *(undefined1 *)(puVar3 + 0x12) = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x13] = 0;
    *(undefined8 *)((long)puVar3 + 0x14) = 0x20000000001;
    *(undefined8 *)((long)puVar3 + 0x1c) = 0x80000000100000;
    *(undefined2 *)((long)puVar3 + 100) = 0x101;
    *(undefined4 *)(puVar3 + 0xc) = 1000;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0x3f80000000000000;
    puVar3[0x11] = 0x4180000000008000;
    thunk_FUN__text__0040625c((long)puVar3 + 0x24);
    FUN__text__004135f0(puVar3 + 7);
    FUN__text__0040618c(param_2);
    uVar7 = FUN__text__0040d190(0);
  }
  else {
    memcpy(_DAT_008a45b0,param_1,0xb0);
    FUN__text__0040618c(param_2);
    uVar7 = FUN__text__0040d190(param_1);
  }
  uVar8 = (ulong)uVar7;
  if (uVar7 == 1) {
    lVar9 = nn::os::GetSystemTickFrequency();
    *_DAT_008a46b8 = (float)((double)lVar9 * 0.001);
    uVar7 = FUN__text__00470f00();
    plVar4 = _DAT_008a45c0;
    uVar8 = (ulong)uVar7;
    if ((uVar7 == 1) && (*_DAT_008a45c0 == 0)) {
      lVar9 = FUN__text__00400f80(0x10,0xf0);
      if (lVar9 == 0) {
        *plVar4 = 0;
        uVar8 = 0x34;
        goto LAB__text__0040d0e4;
      }
      FUN__text__004af750();
      *plVar4 = lVar9;
      uVar8 = FUN__text__004af7f0(lVar9);
      uVar8 = uVar8 & 0xffffffff;
    }
    if ((int)uVar8 == 1) {
      *pcVar2 = '\x01';
      lVar9 = *(long *)(_DAT_008a45b8 + 0x100);
      if (lVar9 != 0) {
        lVar1 = _DAT_008a45f8 + 0x10;
        do {
          local_48 = *(code **)(lVar9 + 8);
          local_40 = *(undefined8 *)(lVar9 + 0x10);
          uStack_38 = *(undefined8 *)(lVar9 + 0x18);
          lVar9 = *(long *)(lVar9 + 0x18);
          local_50 = lVar1;
          (*local_48)(&local_50,0x400,local_40);
        } while (lVar9 != 0);
      }
      uVar8 = FUN__text__004b79a8(*plVar4);
      return uVar8;
    }
  }
LAB__text__0040d0e4:
  FUN__text__0040d6a0();
  return uVar8;
}


