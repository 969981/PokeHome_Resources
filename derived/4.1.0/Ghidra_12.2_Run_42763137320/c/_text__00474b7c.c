/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00474b7c; name: FUN_.text__00474b7c
 */


void FUN__text__00474b7c(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  
  if (((*(byte *)(param_1 + 0x314) & 0x50) == 0) &&
     (((lVar2 = *(long *)(param_1 + 0x288), lVar2 == 0 ||
       (uVar1 = FUN__text__0042fbf4(lVar2), (uVar1 & 1) == 0)) || (*(int *)(lVar2 + 0x1c) != 0)))) {
    *(undefined4 *)(param_1 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
    *(uint *)(param_1 + 0x313) = *(uint *)(param_1 + 0x313) | 0x4000;
    if ((param_2 & 1) == 0) {
      FUN__text__004730bc(2,param_1);
    }
    if (*(long *)(param_1 + 0x288) != 0) {
      FUN__text__0042f610(DAT_00ae9a60);
    }
    FUN__text__0047af90(param_1 + 0x18,1);
    if (*(long *)(param_1 + 0x90) != 0) {
      FUN__text__004587e0();
      return;
    }
  }
  return;
}


