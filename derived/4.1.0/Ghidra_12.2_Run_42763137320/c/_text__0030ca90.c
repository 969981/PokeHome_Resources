/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030ca90; name: FUN_.text__0030ca90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0030ca90(void)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  long local_28;
  
  FUN__text__00304ee0(*_DAT_008a1478,1);
  lVar4 = DAT_008e55f8;
  puVar1 = (undefined4 *)(DAT_008e55f8 + 0xf00094);
  *(undefined4 *)(DAT_008e55f8 + 0xf000a0) = 0x50cdd8;
  auVar7 = FUN__text__0011b95c(*_DAT_0089f508);
  *(undefined8 *)(lVar4 + 0xf00098) = 0x10015f008c54000;
  lVar5 = *_DAT_008a2b50;
  *(undefined1 (*) [16])(lVar4 + 0x68) = auVar7;
  memset((void *)(lVar5 + 0x50),0,0x50cdd8);
  memset((void *)(lVar4 + 0x90),0,0xf00000);
  memcpy((void *)(lVar4 + 0x90),(void *)(lVar5 + 0x50),0x50cdd8);
  FUN__text__00240ddc(&local_28,*(undefined8 *)(lVar4 + 0x50),0x734668);
  if (*(long *)(lVar4 + 0x58) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar4 + 0x58) + 0x48) + 0x18))();
  }
  *puVar1 = 0;
  *(long *)(lVar4 + 0x58) = local_28;
  pcVar6 = *(code **)(local_28 + 0x378);
  if (pcVar6 != (code *)0x0) {
    *(undefined8 *)(local_28 + 0x380) = 0;
    *(undefined8 *)(local_28 + 0x388) = 0;
    *(undefined8 *)(local_28 + 0x370) = 0;
    *(undefined8 *)(local_28 + 0x378) = 0;
    (*pcVar6)(local_28 + 0x390);
  }
  *(undefined4 *)(local_28 + 0x394) = 0;
  *(undefined1 *)(local_28 + 0x390) = 1;
  uVar3 = _DAT_008a2b60;
  *(long *)(local_28 + 0x398) = lVar4;
  uVar2 = _DAT_008a2b58;
  *(undefined8 *)(local_28 + 0x370) = uVar3;
  uVar3 = _DAT_008a2b68;
  *(undefined8 *)(local_28 + 0x378) = uVar2;
  uVar2 = _DAT_008a2b70;
  *(undefined8 *)(local_28 + 0x380) = uVar3;
  *(undefined8 *)(local_28 + 0x388) = uVar2;
  FUN__text__005e896c(*(undefined8 *)(lVar4 + 0x58),0x70b9f5,0xffffffff,0x10);
  return;
}


