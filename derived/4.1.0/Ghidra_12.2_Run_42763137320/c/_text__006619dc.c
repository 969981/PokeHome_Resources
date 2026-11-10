/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006619dc; name: FUN_.text__006619dc
 */


void FUN__text__006619dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x1e8);
  *(undefined8 *)(lVar1 + 0x228) = 0;
  *(undefined1 *)(lVar1 + 0x21c) = 0;
  *(undefined4 *)(lVar1 + 0x238) = 0xffffffff;
  *(undefined8 *)(lVar1 + 0x240) = 0;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined2 *)(lVar1 + 0x250) = 0;
  *(undefined8 *)(lVar1 + 600) = *(undefined8 *)(param_1 + 0x1130);
  uVar2 = *(undefined8 *)(param_1 + 0xc10);
  *(undefined8 *)(lVar1 + 0x268) = 0;
  *(undefined8 *)(lVar1 + 0x260) = uVar2;
  return;
}


