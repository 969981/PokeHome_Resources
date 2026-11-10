/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0069e9e0; name: FUN_.text__0069e9e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0069e9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  uVar4 = nn::os::GetSystemTick();
  nn::util::ReferSymbol((void *)0x8660f0);
  FUN__text__006a0ec0(param_1,param_2,param_3);
  *_DAT_008a68f0 = _DAT_008a68e8;
  puVar3 = _DAT_008a68f8;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *_DAT_008a68f8 = uVar4;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  puVar3[3] = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}


