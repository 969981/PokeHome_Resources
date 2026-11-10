/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e3c90; name: FUN_.text__001e3c90
 */


void FUN__text__001e3c90(long param_1)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  
  *(undefined8 *)(param_1 + 0x8c) = 0x1400000014;
  *(undefined8 *)(param_1 + 0x94) = 0x1400000014;
  *(undefined8 *)(param_1 + 0x9c) = 0x1400000014;
  *(undefined8 *)(param_1 + 0xd4) = 0x1400000012;
  *(undefined8 *)(param_1 + 0xe0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xe8) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xcc) = 0x1100000010;
  *(undefined8 *)(param_1 + 0xf0) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xf8) = 0xcbf29ce484222645;
  *(undefined1 *)(param_1 + 0xdc) = 0x13;
  *(undefined8 *)(param_1 + 0xc4) = 0xf0000000e;
  *(undefined8 *)(param_1 + 0xbc) = 0xd0000000c;
  *(undefined8 *)(param_1 + 0xb4) = 0xb0000000a;
  *(undefined8 *)(param_1 + 0x100) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x108) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0xac) = 0x900000008;
  *(undefined8 *)(param_1 + 0xa4) = 0x700000006;
  *(undefined8 *)(param_1 + 0x8c) = 0x100000000;
  *(undefined8 *)(param_1 + 0x110) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x118) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x94) = 0x300000002;
  *(undefined8 *)(param_1 + 0x9c) = 0x500000004;
  *(undefined8 *)(param_1 + 0x120) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x128) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x130) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x138) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x140) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x148) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x150) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x158) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x160) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x168) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x170) = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x178) = 0xcbf29ce484222645;
  if (*(long *)(param_1 + 0x68) == 0) goto LAB__text__001e3de0;
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  if (puVar5 != (undefined8 *)0x0) {
    plVar2 = (long *)(**(code **)*puVar5)(puVar5);
    plVar3 = (long *)FUN__text__0018d6a0();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) goto LAB__text__001e3dd8;
    }
    if (((int *)puVar5[2] != (int *)0x0) && (*(int *)puVar5[2] == 2)) {
      *(undefined4 *)(param_1 + 0xd8) = 0x13;
      *(undefined1 *)(param_1 + 0xdc) = 0x14;
      goto LAB__text__001e3de0;
    }
  }
LAB__text__001e3dd8:
  if (*(char *)(param_1 + 0xdc) == '\0') {
    return;
  }
LAB__text__001e3de0:
  uVar6 = 0;
  do {
    uVar4 = FUN__text__001d7be0(*(undefined4 *)(param_1 + 0xe0 + uVar6 * 4 + -0x54));
    bVar1 = *(byte *)(param_1 + 0xdc);
    *(undefined8 *)(param_1 + 0xe0 + uVar6 * 8) = uVar4;
    uVar6 = uVar6 + 1;
  } while (uVar6 < bVar1);
  return;
}


