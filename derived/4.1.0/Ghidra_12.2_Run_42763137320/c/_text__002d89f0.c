/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d89f0; name: FUN_.text__002d89f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__002d89f0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  int iVar3;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long local_148;
  undefined1 *local_140;
  code *local_138;
  undefined1 *local_130;
  undefined1 *puStack_128;
  int *local_120 [12];
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *puStack_a8;
  int *local_a0 [12];
  int local_24;
  
  uVar2 = FUN__text__002f9a60(*_DAT_008a2580);
  if ((uVar2 & 1) == 0) {
    local_24 = 0;
    local_160 = 0x2e170ad4f3bbde01;
    uStack_158 = 0x715106;
    local_150 = 5;
    local_148 = 0;
    local_140 = &LAB__text__002dbe08;
    local_138 = FUN__text__002dbe18;
    local_120[0] = &local_24;
    local_130 = &LAB__text__002dbe1c;
    puStack_128 = &LAB__text__002dbe28;
    local_c0 = &LAB__text__002dbe34;
    local_b8 = FUN__text__002dbe44;
    local_b0 = &LAB__text__002dbe48;
    puStack_a8 = &LAB__text__002dbe54;
    local_a0[0] = local_120[0];
    FUN__text__002dbff0(param_1 + 0x50,&local_160);
    pcVar1 = local_b8;
    iVar3 = local_24;
    while (local_b8 = pcVar1, local_24 = iVar3, iVar3 == 0) {
      FUN__text__002dc388(param_1 + 0x50);
      nn::os::SleepThread(&DAT_00989680);
      pcVar1 = local_b8;
      iVar3 = local_24;
    }
    if (pcVar1 != (code *)0x0) {
      local_b0 = (undefined1 *)0x0;
      puStack_a8 = (undefined1 *)0x0;
      local_c0 = (undefined1 *)0x0;
      local_b8 = (code *)0x0;
      (*pcVar1)(local_a0);
    }
    pcVar1 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = (undefined1 *)0x0;
      puStack_128 = (undefined1 *)0x0;
      local_140 = (undefined1 *)0x0;
      local_138 = (code *)0x0;
      (*pcVar1)(local_120);
    }
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    }
  }
  else {
    iVar3 = 3;
  }
  return iVar3;
}


