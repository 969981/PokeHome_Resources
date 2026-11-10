/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005426f0; name: FUN_.text__005426f0
 */


uint FUN__text__005426f0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  
  if (*(uint *)(param_1 + 0x4c) != 0) {
    return *(uint *)(param_1 + 0x4c);
  }
  uVar3 = 0x811c9dc5;
  if (*(uint *)(param_1 + 0x40) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 0x40) * 0x28;
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    do {
      puVar8 = (uint *)puVar4[-1];
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)puVar4[-2];
      }
      uVar1 = *puVar8;
      lVar5 = lVar5 + -0x28;
      uVar7 = *(undefined8 *)*puVar4;
      uVar6 = (uint)uVar7;
      uVar2 = (uint)((ulong)uVar7 >> 0x20);
      uVar3 = (((((((((((uVar3 * 0x1000193 ^ uVar1 & 0xff) * 0x1000193 ^ uVar1 >> 8 & 0xff) *
                       0x1000193 ^ uVar1 >> 0x10 & 0xff) * 0x1000193 ^ uVar1 >> 0x18) * 0x1000193 ^
                    uVar6 & 0xff) * 0x1000193 ^ uVar6 >> 8 & 0xff) * 0x1000193 ^
                  uVar6 >> 0x10 & 0xff) * 0x1000193 ^ uVar6 >> 0x18) * 0x1000193 ^ uVar2 & 0xff) *
                0x1000193 ^ uVar2 >> 8 & 0xff) * 0x1000193 ^ (ushort)((ulong)uVar7 >> 0x30) & 0xff)
              * 0x1000193 ^ (uint)(byte)((ulong)uVar7 >> 0x38);
      puVar4 = puVar4 + 5;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x4c) = uVar3;
  return uVar3;
}


