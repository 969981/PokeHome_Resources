/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00302f68; name: FUN_.text__00302f68
 */


void FUN__text__00302f68(long param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((param_3 < 0x1e) && (param_2 < *(uint *)(param_1 + 0x700fdc))) {
    uVar6 = param_4[5];
    lVar5 = param_1 + (ulong)param_2 * 0x5fa0 + (ulong)param_3 * 0x330;
    uVar1 = param_4[3];
    uVar3 = param_4[4];
    *(undefined4 *)(lVar5 + 900) = *(undefined4 *)(param_4 + 6);
    uVar2 = *param_4;
    uVar4 = param_4[1];
    uVar7 = param_4[2];
    *(undefined8 *)(lVar5 + 0x374) = uVar3;
    *(undefined8 *)(lVar5 + 0x37c) = uVar6;
    *(undefined8 *)(lVar5 + 0x354) = uVar2;
    *(undefined8 *)(lVar5 + 0x35c) = uVar4;
    *(undefined8 *)(lVar5 + 0x364) = uVar7;
    *(undefined8 *)(lVar5 + 0x36c) = uVar1;
  }
  return;
}


