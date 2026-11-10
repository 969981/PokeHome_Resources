/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004B2670
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005b2670; name: FUN_.text__005b2670
 */


void FUN__text__005b2670(LightEventType *param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  LightEventType *pLVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  LightEventType *pLVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pLVar2 = param_1 + 0x70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pLVar1 = *(LightEventType **)pLVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (pLVar1 != pLVar2) { // [自动静态注释] 循环/迭代
    pLVar3 = *(LightEventType **)pLVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)pLVar1 = 0;
    *(undefined8 *)(pLVar1 + 8) = 0;
    pLVar1 = pLVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  pLVar3 = param_1 + 0x88; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(LightEventType **)(param_1 + 0x70) = param_1 + 0x70;
  *(LightEventType **)(param_1 + 0x78) = pLVar2;
  pLVar1 = *(LightEventType **)pLVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (pLVar1 != pLVar3) { // [自动静态注释] 循环/迭代
    pLVar4 = *(LightEventType **)pLVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)pLVar1 = 0;
    *(undefined8 *)(pLVar1 + 8) = 0;
    pLVar1 = pLVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(LightEventType **)(param_1 + 0x88) = param_1 + 0x88;
  *(LightEventType **)(param_1 + 0x90) = pLVar3;
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar5 = *(undefined8 **)(param_1 + 0xa0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    do { // [自动静态注释] 循环/迭代
      while (puVar6 = (undefined8 *)puVar5[1], puVar6 == (undefined8 *)0x0) { // [自动静态注释] 循环/迭代
        puVar6 = (undefined8 *)puVar5[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *puVar5 = 0;
        puVar5[1] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (puVar6 == (undefined8 *)0x0) goto LAB__text__005b2740; // [自动静态注释] 条件判断/分支
      } // [自动静态注释] 作用域/控制流边界
      puVar5[1] = puVar6[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar6[2] = puVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar5 = puVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar6 != (undefined8 *)0x0); // [自动静态注释] 循环/迭代
LAB__text__005b2740: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined4 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    pLVar1 = *(LightEventType **)pLVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    while (pLVar1 != pLVar3) { // [自动静态注释] 循环/迭代
      pLVar4 = *(LightEventType **)pLVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)pLVar1 = 0;
      *(undefined8 *)(pLVar1 + 8) = 0;
      pLVar1 = pLVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)pLVar3 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  pLVar1 = *(LightEventType **)pLVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  while (pLVar1 != pLVar2) { // [自动静态注释] 循环/迭代
    pLVar3 = *(LightEventType **)pLVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)pLVar1 = 0;
    *(undefined8 *)(pLVar1 + 8) = 0;
    pLVar1 = pLVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  FUN__text__005b3880(param_1 + 8); // [自动静态注释] 调用尚未恢复正式名称的函数
  nn::os::FinalizeLightEvent(param_1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


