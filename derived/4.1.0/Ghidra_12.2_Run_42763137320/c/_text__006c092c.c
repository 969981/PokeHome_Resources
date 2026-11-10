/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006c092c; name: FUN_.text__006c092c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006c092c(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  if ((uVar1 & 1) != 0) {
    FUN__text__006f4fc4(param_1 + 0x11,param_2);
    FUN__text__006f5cc0(param_1 + 8,param_2);
    (*(code *)*_DAT_008a5388)
              (param_1[3],param_1[4],param_1[5],param_1[6],*_DAT_008a5390,
               *(undefined4 *)((long)param_1 + 0xd4));
    *(undefined4 *)(param_1 + 0x1a) = 0;
    param_1[5] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}


