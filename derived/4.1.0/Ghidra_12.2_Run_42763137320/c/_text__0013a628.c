/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013a628; name: FUN_.text__0013a628
 */


void FUN__text__0013a628(long param_1,uint param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x721a50;
  if (*(int *)(param_1 + 0x64c) != 0) {
    uVar3 = 0x721a58;
  }
  uVar3 = FUN__text__0012cdb0(param_1 + 0x110,uVar3);
  uVar1 = FUN__text__003ae458();
  uVar2 = FUN__text__003b22d0(uVar3,uVar1);
  FUN__text__0012c378(param_1 + 0x110,
                      (ulong)(uVar2 == param_2) * 0x540 + 0x722d20 + (ulong)param_2 * 0xc0 +
                      (ulong)param_3 * 0x20 + (ulong)param_4 * 8);
  return;
}


