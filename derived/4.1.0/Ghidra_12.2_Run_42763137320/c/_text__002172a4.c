/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002172a4; name: FUN_.text__002172a4
 */


void FUN__text__002172a4(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN__text__002155e0();
  if (((param_2 < 0xe) && ((uVar2 & 1) != 0)) &&
     (uVar1 = FUN__text__002156ec(param_1), param_3 < uVar1)) {
    lVar3 = *(long *)(param_1 + 0x90) + (ulong)param_2 * 0x960 + (ulong)param_3 * 0x50;
    *(undefined8 *)(lVar3 + 0x4c) = 0;
    *(undefined8 *)(lVar3 + 0x44) = 0;
    *(undefined8 *)(lVar3 + 0x3c) = 0;
    *(undefined8 *)(lVar3 + 0x34) = 0;
    *(undefined8 *)(lVar3 + 0x2c) = 0;
    *(undefined8 *)(lVar3 + 0x24) = 0;
    *(undefined8 *)(lVar3 + 0x1c) = 0;
    *(undefined8 *)(lVar3 + 0x14) = 0;
    *(undefined8 *)(lVar3 + 0xc) = 0;
    *(undefined8 *)(lVar3 + 4) = 0;
  }
  return;
}


