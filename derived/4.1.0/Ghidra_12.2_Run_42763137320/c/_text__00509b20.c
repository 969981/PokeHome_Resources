/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00509b20; name: FUN_.text__00509b20
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__00509b20(long *param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar4 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = FUN__text__00400f80(0xb,(ulong)uVar1 * 0x118);
  if (lVar5 != 0) {
    lVar6 = *param_1;
    if ((lVar6 != 0) && (lVar6 != lVar5)) {
      if (uVar4 != 0) {
        lVar7 = 0;
        lVar6 = _DAT_008a4038 + 0x10;
        do {
          plVar2 = (long *)(lVar5 + lVar7);
          plVar2[4] = 0;
          plVar2[6] = 0;
          plVar2[7] = 0;
          *(undefined4 *)(plVar2 + 5) = 0;
          *(undefined4 *)(plVar2 + 0xe) = 0;
          *(undefined4 *)(plVar2 + 0x17) = 0;
          *(undefined4 *)(plVar2 + 0x13) = 0;
          plVar2[0x22] = 0;
          plVar2[2] = 0;
          plVar2[3] = 0;
          *plVar2 = lVar6;
          plVar2[1] = 0;
          plVar2[8] = 0;
          plVar2[9] = 0;
          plVar2[10] = 0;
          plVar2[0xb] = 0;
          plVar2[0xc] = -1;
          plVar2[0xd] = -1;
          plVar2[0x15] = 0;
          plVar2[0x16] = 0;
          plVar2[0x11] = 0;
          plVar2[0x12] = 0;
          plVar2[0xf] = 0;
          plVar2[0x10] = 0;
          plVar2[0x18] = 0;
          plVar2[0x19] = 1;
          plVar2[0x1a] = 3;
          plVar2[0x1b] = 5;
          plVar2[0x1c] = 7;
          plVar2[0x1d] = 1;
          plVar2[0x1e] = 3;
          plVar2[0x1f] = 5;
          plVar2[0x20] = 7;
          plVar2[0x21] = 0;
          FUN__text__00509ca0(plVar2,*param_1 + lVar7);
          lVar3 = *param_1 + lVar7;
          FUN__text__005099b0(lVar3);
          FUN__text__00507b30(lVar3 + 0x78);
          if (*(long *)(lVar3 + 0xa8) != 0) {
            *(undefined4 *)(lVar3 + 0xb0) = 0;
            FUN__text__00400fc0(0xb);
            *(undefined8 *)(lVar3 + 0xa8) = 0;
            *(undefined4 *)(lVar3 + 0xb4) = 0;
          }
          FUN__text__0051cae0(lVar3 + 0x88);
          lVar7 = lVar7 + 0x118;
        } while ((ulong)uVar4 * 0x118 != lVar7);
        lVar6 = *param_1;
      }
      FUN__text__00400fc0(0xb,lVar6);
    }
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return lVar5 != 0;
}


