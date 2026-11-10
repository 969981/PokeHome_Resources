/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b22b8; name: FUN_.text__005b22b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005b22b8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _DAT_008a0448;
  FUN__text__006f5390(param_1 + 0xe0,_DAT_008a0448);
  FUN__text__005b509c(param_1 + 0xb0);
  FUN__text__006f5658(param_1 + 0x7c8,uVar1);
  FUN__text__006f5658(param_1 + 0x820,uVar1);
  FUN__text__006f572c(param_1 + 0x718,uVar1);
  FUN__text__006f572c(param_1 + 0x770,uVar1);
  nn::vi::DestroyLayer(*(Layer **)(param_1 + 0x890));
  nn::vi::CloseDisplay(*(Display **)(param_1 + 0x888));
  nn::vi::Finalize();
  FUN__text__006f5614(param_1 + 0x820);
  FUN__text__006f5614(param_1 + 0x7c8);
  FUN__text__006f56e8(param_1 + 0x770);
  FUN__text__006f56e8(param_1 + 0x718);
  FUN__text__006f50a0(param_1 + 0xe0);
  FUN__text__005b509c(param_1 + 0xb0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(long *)(param_1 + 0xa8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN__text__005b5108(param_1);
  return;
}


