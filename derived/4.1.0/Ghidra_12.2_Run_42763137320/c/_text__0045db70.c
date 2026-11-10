/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045db70; name: FUN_.text__0045db70
 */


void FUN__text__0045db70(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1 + 0xd8;
  puVar5 = (undefined8 *)(param_1 + 0xe0);
  lVar4 = lVar1;
  if (*(int *)(param_1 + 0x108) != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x100);
    lVar4 = param_1 + 0xf8;
  }
  puVar5 = (undefined8 *)*puVar5;
  if (puVar5 != (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 8)) {
    do {
      puVar6 = puVar5 + 1;
      (**(code **)(*(long *)*puVar5 + 0xb0))((long *)*puVar5,param_2,param_3,param_4);
      bVar2 = lVar4 != lVar1;
      bVar3 = puVar6 == (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 8);
      if (bVar2 && bVar3) {
        lVar4 = lVar1;
      }
      puVar5 = puVar6;
      if (bVar2 && bVar3) {
        puVar5 = *(undefined8 **)(param_1 + 0xe0);
      }
    } while (puVar5 != (undefined8 *)(*(long *)(lVar4 + 8) + (ulong)*(uint *)(lVar4 + 0x10) * 8));
  }
  return;
}


