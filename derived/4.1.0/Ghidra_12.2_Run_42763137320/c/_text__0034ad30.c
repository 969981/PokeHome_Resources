/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0034ad30; name: FUN_.text__0034ad30
 */


undefined8 FUN__text__0034ad30(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  long lVar5;
  void *__s;
  ulong uVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  uint local_9f8;
  undefined4 local_9f4;
  int aiStack_9f0 [622];
  undefined8 local_38;
  undefined8 local_18;
  
  if (param_2 < 0x27e0) {
    if (param_2 == 0x2267) {
      lVar5 = FUN__text__0030d5f0();
      *(undefined4 *)(lVar5 + 0x127d) = 0;
      *(undefined8 *)(lVar5 + 0x121d) = 0;
      *(undefined8 *)(lVar5 + 0x1225) = 0;
      *(undefined8 *)(lVar5 + 0x122d) = 0;
      *(undefined8 *)(lVar5 + 0x1235) = 0;
      *(undefined8 *)(lVar5 + 0x123d) = 0;
      *(undefined8 *)(lVar5 + 0x1245) = 0;
      *(undefined8 *)(lVar5 + 0x124d) = 0;
      *(undefined8 *)(lVar5 + 0x1255) = 0;
      *(undefined8 *)(lVar5 + 0x125d) = 0;
      *(undefined8 *)(lVar5 + 0x1265) = 0;
      *(undefined8 *)(lVar5 + 0x126d) = 0;
      *(undefined8 *)(lVar5 + 0x1275) = 0;
      __s = (void *)FUN__text__00321ac0();
      memset(__s,0,1000);
      lVar5 = FUN__text__0030d5f0();
      *(undefined8 *)(lVar5 + 0x12a1) = 0;
      *(undefined8 *)(lVar5 + 0x12a9) = 0;
      *(undefined1 *)(lVar5 + 0x12b1) = 0;
      nn::crypto::GenerateCryptographicallyRandomBytes(&local_18,4);
      lVar10 = -0x26e;
      iVar11 = 1;
      local_9f8 = (uint)local_18;
      lVar5 = (ulong)(((uint)local_18 ^ (uint)local_18 >> 0x1e) * 0x6c078965) + 1;
      local_9f4 = (undefined4)lVar5;
      piVar7 = aiStack_9f0;
      do {
        iVar1 = iVar11 + 1;
        iVar11 = iVar11 + 2;
        iVar4 = ((uint)lVar5 ^ (uint)lVar5 >> 0x1e) * 0x6c078965;
        iVar9 = (int)lVar10;
        uVar2 = iVar4 + iVar1;
        lVar10 = lVar10 + 2;
        *piVar7 = iVar9 + iVar4 + 0x270;
        lVar5 = lVar10 + (ulong)((uVar2 ^ uVar2 >> 0x1e) * 0x6c078965) + 0x26f;
        piVar7[1] = (int)lVar5;
        piVar7 = piVar7 + 2;
      } while (lVar10 != 0);
      local_38 = 0;
      local_18 = 0x3d00000000;
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a1) = 0x73;
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a2) = 0x77;
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a3) = 0x74;
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a4) = 99;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a5) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a6) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a7) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a8) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12a9) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12aa) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12ab) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12ac) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12ad) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12ae) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12af) = uVar3;
      uVar6 = FUN__text__001138d0(&local_18,&local_9f8,&local_18);
      uVar3 = *(undefined1 *)((uVar6 & 0xffffffff) + 0x71259b);
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12b0) = uVar3;
      lVar5 = FUN__text__0030d5f0();
      *(undefined1 *)(lVar5 + 0x12b1) = 0;
      return 0;
    }
    if (param_2 != 0x27de) {
      return 0;
    }
    lVar5 = FUN__text__00321ac0(0);
    uVar8 = 3;
  }
  else {
    if ((param_2 != 0x27e3) && (param_2 != 0x27e0)) {
      return 0;
    }
    lVar5 = FUN__text__00321ac0(0);
    uVar8 = 2;
  }
  *(undefined4 *)(lVar5 + 0x934d0) = uVar8;
  return 1;
}


