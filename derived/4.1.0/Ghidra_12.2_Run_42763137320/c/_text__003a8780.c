/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a8780; name: FUN_.text__003a8780
 */


undefined8 FUN__text__003a8780(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (((DAT_00ae8440 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_00ae8440), iVar1 != 0)) {
    DAT_00ae8448 = 0x10000000;
    DAT_00ae8450 = 0xffffffff00000000;
    DAT_00ae8458 = 0x40000000;
    DAT_00ae8460 = 0x100000000;
    DAT_00ae8468 = 0x80000000;
    DAT_00ae8470 = 0xffffffff;
    DAT_00ae8478 = 0x20000000;
    DAT_00ae8480 = 1;
    __cxa_guard_release(&DAT_00ae8440);
  }
  uVar2 = *(ulong *)(param_2 + 8);
  if ((uVar2 & DAT_00ae8448) == 0) {
LAB__text__003a87e8:
    if ((uVar2 & DAT_00ae8458) != 0) {
      uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_2 + 8);
        goto LAB__text__003a8820;
      }
LAB__text__003a8810:
      puVar3 = &DAT_00ae8458;
      goto LAB__text__003a8888;
    }
LAB__text__003a8820:
    if ((uVar2 & DAT_00ae8468) != 0) {
      uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))();
      if ((uVar2 & 1) == 0) {
        uVar2 = *(ulong *)(param_2 + 8);
        goto LAB__text__003a8858;
      }
LAB__text__003a8848:
      puVar3 = &DAT_00ae8468;
      goto LAB__text__003a8888;
    }
LAB__text__003a8858:
    if (((uVar2 & DAT_00ae8478) == 0) ||
       (uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))(),
       (uVar2 & 1) == 0)) {
      if (((*(ulong *)(param_2 + 0x18) & DAT_00ae8448) != 0) &&
         (((*(char *)(param_1 + 0x3cc) == '\0' ||
           (uVar2 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x408),&DAT_00ae8450),
           (uVar2 & 1) == 0)) &&
          (uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))(),
          (uVar2 & 1) != 0)))) goto LAB__text__003a87d8;
      if (((*(ulong *)(param_2 + 0x18) & DAT_00ae8458) != 0) &&
         (((*(char *)(param_1 + 0x3cc) == '\0' ||
           (uVar2 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x408),&DAT_00ae8460),
           (uVar2 & 1) == 0)) &&
          (uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))(),
          (uVar2 & 1) != 0)))) goto LAB__text__003a8810;
      if ((((*(ulong *)(param_2 + 0x18) & DAT_00ae8468) != 0) &&
          ((*(char *)(param_1 + 0x3cc) == '\0' ||
           (uVar2 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x408),&DAT_00ae8470),
           (uVar2 & 1) == 0)))) &&
         (uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))(),
         (uVar2 & 1) != 0)) goto LAB__text__003a8848;
      if (((*(ulong *)(param_2 + 0x18) & DAT_00ae8478) == 0) ||
         (((*(char *)(param_1 + 0x3cc) != '\0' &&
           (uVar2 = FUN__text__003b6364(*(undefined8 *)(param_1 + 0x408),&DAT_00ae8480),
           (uVar2 & 1) != 0)) ||
          (uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))(),
          (uVar2 & 1) == 0)))) {
        return 1;
      }
    }
    puVar3 = &DAT_00ae8478;
  }
  else {
    uVar2 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x428) + 0x38))();
    if ((uVar2 & 1) == 0) {
      uVar2 = *(ulong *)(param_2 + 8);
      goto LAB__text__003a87e8;
    }
LAB__text__003a87d8:
    puVar3 = &DAT_00ae8448;
  }
LAB__text__003a8888:
  *(undefined8 *)(param_1 + 0x3c0) = puVar3[1];
  return 0;
}


