/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00437084; name: FUN_.text__00437084
 */


undefined8
FUN__text__00437084(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  int iVar4;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 auStack_60 [4];
  int local_5c;
  long local_58;
  int local_50;
  int iStack_4c;
  undefined8 local_48;
  int local_28;
  char local_24 [4];
  
  piVar1 = (int *)(param_1 + 0x70);
  if (param_4 != 0) {
    piVar1 = (int *)(param_4 + 0x20);
  }
  piVar2 = piVar1;
  if (param_3 != 0) {
    piVar2 = (int *)(param_3 + 0x20);
  }
  local_5c = *piVar1;
  iVar4 = *piVar2;
  local_24[0] = '\x01';
  local_28 = iVar4;
  if (local_5c != iVar4) {
    local_68 = 1;
    local_64 = 1;
    local_80 = param_1;
    uStack_78 = param_2;
    local_70 = param_5;
    FUN__text__004365fc(param_3,&local_28,&local_5c,&local_80,local_24,auStack_60);
    *(char *)(param_1 + 0x89) = *(char *)(param_1 + 0x89) + '\x01';
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) + '\x04';
    iStack_4c = local_5c;
    local_58 = param_1;
    local_50 = iVar4;
    local_48 = param_2;
    FUN__text__004393b0(param_1 + 0x78,&local_58);
    *(char *)(param_1 + 0x88) = *(char *)(param_1 + 0x88) + -4;
    if (local_24[0] == '\0') {
      return 0;
    }
  }
  lVar3 = param_1 + 0x58;
  if (param_4 != 0) {
    lVar3 = param_4 + 8;
  }
  FUN__text__004372a0(param_3 + 8,lVar3);
  return 1;
}


