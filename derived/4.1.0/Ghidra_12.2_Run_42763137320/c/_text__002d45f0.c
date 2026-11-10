/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d45f0; name: FUN_.text__002d45f0
 */


bool FUN__text__002d45f0(long param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  undefined8 *puVar2;
  int *piVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar2 = *(undefined8 **)(param_1 + 0x270);
  if (puVar2 != *(undefined8 **)(param_1 + 0x278)) {
    do {
      piVar3 = (int *)*puVar2;
      puVar4 = (ushort *)((long)piVar3 - (long)*piVar3);
      uVar1 = *puVar4;
      if (uVar1 < 7) {
        if ((param_2 & 0xffff) == 0) goto LAB__text__002d466c;
      }
      else {
        uVar5 = 0;
        if ((ulong)puVar4[3] != 0) {
          uVar5 = *(uint *)((long)piVar3 + (ulong)puVar4[3]);
        }
        if (uVar5 == (param_2 & 0xffff)) {
LAB__text__002d466c:
          if (uVar1 < 9) {
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            if ((ulong)puVar4[4] != 0) {
              uVar5 = *(uint *)((long)piVar3 + (ulong)puVar4[4]);
            }
          }
          if (uVar5 == (param_3 & 0xffff)) {
            if (uVar1 < 0xf) {
              return false;
            }
            if ((ulong)puVar4[7] == 0) {
              return false;
            }
            return *(char *)((long)piVar3 + (ulong)puVar4[7]) != '\0';
          }
        }
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != *(undefined8 **)(param_1 + 0x278));
  }
  return false;
}


