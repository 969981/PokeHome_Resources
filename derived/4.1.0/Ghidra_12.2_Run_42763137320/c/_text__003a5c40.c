/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5c40; name: FUN_.text__003a5c40
 */


void FUN__text__003a5c40(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  FUN__text__003a14e8(param_1,0);
  puVar2 = (undefined4 *)
           (**(code **)(**(long **)(param_1 + 0x98) + 0xf8))
                     (*(long **)(param_1 + 0x98),param_1 + 0xa8,0x7133cf);
  *(char *)(param_1 + 0x510) = (char)*puVar2;
  *(char *)(param_1 + 0x511) = (char)puVar2[1];
  uVar1 = puVar2[2];
  *(undefined1 *)(param_1 + 0x513) = 0xff;
  *(char *)(param_1 + 0x512) = (char)uVar1;
  puVar2 = (undefined4 *)
           (**(code **)(**(long **)(param_1 + 0x98) + 0xf8))
                     (*(long **)(param_1 + 0x98),param_1 + 0xa8,0x71958f);
  *(char *)(param_1 + 0x514) = (char)*puVar2;
  *(char *)(param_1 + 0x515) = (char)puVar2[1];
  uVar1 = puVar2[2];
  *(undefined1 *)(param_1 + 0x517) = 0xff;
  *(char *)(param_1 + 0x516) = (char)uVar1;
  return;
}


