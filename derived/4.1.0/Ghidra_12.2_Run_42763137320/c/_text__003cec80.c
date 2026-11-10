/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003cec80; name: FUN_.text__003cec80
 */


void FUN__text__003cec80(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN__text__003e9680(*(undefined8 *)(param_1 + 0xc0),0x720314);
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  uVar2 = 0x70c76e;
  if (*(int *)(param_1 + 0x394) != 0) {
    uVar2 = 0x71f618;
  }
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),0,uVar2,0);
  uVar2 = 0x7160a6;
  if (*(int *)(param_1 + 0x394) != 0) {
    uVar2 = 0x71dcb9;
  }
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),1,uVar2,0);
  uVar2 = 0x70dc8b;
  if (*(int *)(param_1 + 0x394) != 0) {
    uVar2 = 0x719637;
  }
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),2,uVar2,0);
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),7,0x713e9e,0);
  FUN__text__003e99b4(*(undefined8 *)(param_1 + 0xc0),8,0x70fb2e,0);
  uVar2 = FUN__text__003e9790(*(undefined8 *)(param_1 + 0xc0),0x71f5ee);
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),uVar2,3,0x717f63,0);
  lVar1 = FUN__text__003e9790(*(undefined8 *)(param_1 + 0xc0),0x720fb4);
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),lVar1,4,0x716bd7,0);
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),lVar1,5,0x71751f,0);
  FUN__text__003e9ad8(*(undefined8 *)(param_1 + 0xc0),lVar1,6,0x71a257,0);
  *(long *)(param_1 + 0x388) = lVar1;
  *(byte *)(lVar1 + 0x58) = *(byte *)(lVar1 + 0x58) & 0xfe;
  return;
}


