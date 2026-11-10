/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b2670; name: FUN_.text__005b2670
 */


void FUN__text__005b2670(LightEventType *param_1)

{
  LightEventType *pLVar1;
  LightEventType *pLVar2;
  LightEventType *pLVar3;
  LightEventType *pLVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  pLVar2 = param_1 + 0x70;
  pLVar1 = *(LightEventType **)pLVar2;
  while (pLVar1 != pLVar2) {
    pLVar3 = *(LightEventType **)pLVar1;
    *(undefined8 *)pLVar1 = 0;
    *(undefined8 *)(pLVar1 + 8) = 0;
    pLVar1 = pLVar3;
  }
  pLVar3 = param_1 + 0x88;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(LightEventType **)(param_1 + 0x70) = param_1 + 0x70;
  *(LightEventType **)(param_1 + 0x78) = pLVar2;
  pLVar1 = *(LightEventType **)pLVar3;
  while (pLVar1 != pLVar3) {
    pLVar4 = *(LightEventType **)pLVar1;
    *(undefined8 *)pLVar1 = 0;
    *(undefined8 *)(pLVar1 + 8) = 0;
    pLVar1 = pLVar4;
  }
  *(LightEventType **)(param_1 + 0x88) = param_1 + 0x88;
  *(LightEventType **)(param_1 + 0x90) = pLVar3;
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0xa0);
  if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    do {
      while (puVar6 = (undefined8 *)puVar5[1], puVar6 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)puVar5[2];
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5 = puVar6;
        if (puVar6 == (undefined8 *)0x0) goto LAB__text__005b2740;
      }
      puVar5[1] = puVar6[2];
      puVar6[2] = puVar5;
      puVar5 = puVar6;
    } while (puVar6 != (undefined8 *)0x0);
LAB__text__005b2740:
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    pLVar1 = *(LightEventType **)pLVar3;
    while (pLVar1 != pLVar3) {
      pLVar4 = *(LightEventType **)pLVar1;
      *(undefined8 *)pLVar1 = 0;
      *(undefined8 *)(pLVar1 + 8) = 0;
      pLVar1 = pLVar4;
    }
  }
  *(undefined8 *)pLVar3 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  pLVar1 = *(LightEventType **)pLVar2;
  while (pLVar1 != pLVar2) {
    pLVar3 = *(LightEventType **)pLVar1;
    *(undefined8 *)pLVar1 = 0;
    *(undefined8 *)(pLVar1 + 8) = 0;
    pLVar1 = pLVar3;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN__text__005b3880(param_1 + 8);
  nn::os::FinalizeLightEvent(param_1);
  return;
}


