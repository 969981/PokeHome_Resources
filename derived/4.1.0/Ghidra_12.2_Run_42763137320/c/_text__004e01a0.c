/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e01a0; name: FUN_.text__004e01a0
 */


bool FUN__text__004e01a0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN__text__00400f80(0,(ulong)uVar1 * 0xc0);
  if (lVar5 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      if (uVar4 != 0) {
        lVar6 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar6);
          puVar2[8] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0x3f80000000000000;
          *(undefined4 *)(puVar2 + 9) = 0x3f800000;
          *(undefined2 *)((long)puVar2 + 0x4c) = 0;
          *(undefined1 *)((long)puVar2 + 0x4e) = 1;
          *(undefined1 *)(puVar2 + 0x11) = 0;
          *(undefined4 *)(puVar2 + 0xe) = 0;
          *(undefined1 *)(puVar2 + 0x12) = 0x32;
          *(undefined4 *)(puVar2 + 0x15) = 0;
          *(undefined4 *)(puVar2 + 0x16) = 0;
          puVar2[0x17] = 0;
          *puVar2 = 0xffffffffffffffff;
          puVar2[1] = 0;
          puVar2[2] = 0x3f800000;
          puVar2[3] = 0x3f800000;
          puVar2[6] = 0xffff3f800000;
          puVar2[7] = 0x3f800000;
          puVar2[0xf] = 0;
          puVar2[0x10] = 0;
          puVar2[10] = 0x3f8000003f800000;
          puVar2[0xb] = 0;
          puVar2[0xc] = 0;
          puVar2[0xd] = 0;
          puVar2[0x13] = 0;
          puVar2[0x14] = 0x2b00000000;
          FUN__text__004e0340(puVar2,*param_1 + lVar6);
          lVar3 = *param_1 + lVar6;
          if (*(long *)(lVar3 + 0xb8) != 0) {
            FUN__text__00400fc0(0);
            *(undefined8 *)(lVar3 + 0xb8) = 0;
          }
          if (*(long *)(lVar3 + 0x60) != 0) {
            *(undefined4 *)(lVar3 + 0x68) = 0;
            (**(code **)(**(long **)(lVar3 + 0x58) + 0x18))();
            *(undefined8 *)(lVar3 + 0x60) = 0;
            *(undefined4 *)(lVar3 + 0x6c) = 0;
          }
          if ((*(long *)(lVar3 + 0x80) != 0) && (*(char *)(lVar3 + 0x88) != '\0')) {
            (**(code **)(**(long **)(lVar3 + 0x78) + 0x18))();
            *(undefined1 *)(lVar3 + 0x88) = 0;
          }
          lVar6 = lVar6 + 0xc0;
          *(undefined8 *)(lVar3 + 0x80) = 0;
        } while ((ulong)uVar4 * 0xc0 != lVar6);
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(0,lVar6);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar5 != 0;
}


