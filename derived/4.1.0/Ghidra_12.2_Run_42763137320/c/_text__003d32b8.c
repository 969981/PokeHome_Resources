/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d32b8; name: FUN_.text__003d32b8
 */


uint FUN__text__003d32b8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 local_48;
  undefined1 auStack_40 [16];
  
  uVar5 = FUN__text__0015536c(param_2);
  if ((uVar5 & 1) == 0) {
    return 0xff000000;
  }
  local_48 = 0xaf66cf4c8606ef75;
  FUN__text__001554a0(auStack_40,param_2,&local_48);
  uVar1 = FUN__text__00155670(auStack_40,0);
  local_48 = 0xaf66ba4c8606cbc6;
  FUN__text__001554a0(auStack_40,param_2,&local_48);
  uVar2 = FUN__text__00155670(auStack_40,0);
  local_48 = 0xaf66bf4c8606d445;
  FUN__text__001554a0(auStack_40,param_2,&local_48);
  uVar3 = FUN__text__00155670(auStack_40,0);
  local_48 = 0xaf66bc4c8606cf2c;
  FUN__text__001554a0(auStack_40,param_2,&local_48);
  iVar4 = FUN__text__00155670(auStack_40,0);
  return (uVar3 & 0xff) << 0x10 | iVar4 << 0x18 | (uVar2 & 0xff) << 8 | uVar1 & 0xff;
}


