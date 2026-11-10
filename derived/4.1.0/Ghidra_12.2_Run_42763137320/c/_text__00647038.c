/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00647038; name: FUN_.text__00647038
 */


void FUN__text__00647038(long param_1,long param_2,long param_3)

{
  undefined2 uVar1;
  
  *(long *)(param_1 + 8) = param_3;
  *(long *)(param_1 + 0x10) = param_2;
  *(undefined2 *)(param_1 + 0x18) = 0;
  if (param_2 != 0) {
    uVar1 = FUN__text__0063a010(param_2 + 8,0x140);
    *(undefined2 *)(*(long *)(param_1 + 0x10) + 6) = uVar1;
    FUN__text__0063a0c0(*(undefined4 **)(param_1 + 0x10) + 2,0x140,**(undefined4 **)(param_1 + 0x10)
                       );
    param_3 = *(long *)(param_1 + 8);
  }
  if ((param_3 != 0) && (*(undefined4 **)(param_1 + 0x10) != (undefined4 *)0x0)) {
    FUN__text__0063a0c0(param_3,0x10,**(undefined4 **)(param_1 + 0x10));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}


