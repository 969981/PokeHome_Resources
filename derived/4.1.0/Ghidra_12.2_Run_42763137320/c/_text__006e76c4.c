/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006e76c4; name: FUN_.text__006e76c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__006e76c4(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *param_1;
  if (*(char *)(*(long *)(lVar6 + 0xa0) + 0x752) == '\0') {
    lVar7 = *(long *)(*(long *)(lVar6 + 0x238) + 0x338);
    puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar6 + 0x828) + 0x10))(lVar6 + 0x828,0x2c,0x80);
    uVar3 = 0;
    if (puVar4 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar4 + 5) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *(undefined8 **)(*param_1 + 0x418) = puVar4;
      *(undefined4 *)puVar4 = *(undefined4 *)(lVar7 + 0x18);
      *(undefined4 *)((long)puVar4 + 4) = *(undefined4 *)(lVar7 + 0x1c);
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 2) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x14) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)(puVar4 + 3) = (float)uVar1 * 2.3283064e-10;
      uVar1 = *(uint *)(*param_1 + 0xac);
      *(uint *)(*param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
      *(float *)((long)puVar4 + 0x1c) = (float)uVar1 * 2.3283064e-10;
      FUN__text__006d7b48(*param_1,4,0x60);
      lVar6 = *param_1;
      iVar2 = (*(int *)(lVar6 + 0x230) +
              *(int *)(*(long *)(*(long *)(lVar6 + 0x238) + 0x338) + 0x10) * *(int *)(lVar6 + 0x230)
              ) * 0xa0 + 0xa0;
      if (iVar2 == 0) {
        return 1;
      }
      lVar7 = *(long *)(lVar6 + 0x418);
      uVar5 = FUN__text__006d7b8c(lVar6,*(undefined4 *)(*_DAT_008a6bd0 + 0x20),(long)iVar2);
      uVar3 = 1;
      if ((uVar5 & 1) != 0) {
        *(undefined1 *)(lVar7 + 0x20) = 1;
        return uVar3;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


