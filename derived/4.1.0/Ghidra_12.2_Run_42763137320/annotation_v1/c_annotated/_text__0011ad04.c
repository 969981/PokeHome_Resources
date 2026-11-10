/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0001AD04
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011ad04; name: FUN_.text__0011ad04
 */


/* WARNING: Type propagation algorithm not settling */

void FUN__text__0011ad04(long param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  char cVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  SixAxisSensorHandle *pSVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  SixAxisSensorHandle *pSVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)(param_1 + 0x3c) == param_2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pSVar7 = (SixAxisSensorHandle *)(param_1 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)pSVar7 = 0;
  *(int *)(param_1 + 0x3c) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  if (param_2 - 1U < 5) { // [自动静态注释] 条件判断/分支
    uVar5 = *(undefined8 *)((long)(int)(param_2 - 1U) * 8 + 0x7217c8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar5 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  iVar3 = nn::hid::GetSixAxisSensorHandles(pSVar7,8,param_1 + 8,uVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(uint *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(param_1 + 0x10) = (long)iVar3;
  if (*(char *)(param_1 + 0x38) == '\0') { // [自动静态注释] 条件判断/分支
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x34U) != 0)) { // [自动静态注释] 条件判断/分支
      nn::hid::StopSixAxisSensor(pSVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((uVar1 < 6) && ((1 << (ulong)(uVar1 & 0x1f) & 0x34U) != 0)) { // [自动静态注释] 条件判断/分支
      nn::hid::StartSixAxisSensor(pSVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x38) = uVar6;
  uVar1 = *(int *)(param_1 + 0x3c) - 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(param_1 + 0x39) == '\0') { // [自动静态注释] 条件判断/分支
    if (uVar1 < 2) { // [自动静态注释] 条件判断/分支
      nn::hid::StopSixAxisSensor(pSVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x39) = 0;
    iVar3 = *(int *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = *(char *)(param_1 + 0x3a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (uVar1 < 2) { // [自动静态注释] 条件判断/分支
      nn::hid::StartSixAxisSensor(pSVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)(param_1 + 0x39) = 1;
    iVar3 = *(int *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = *(char *)(param_1 + 0x3a); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  if (cVar2 != '\0') { // [自动静态注释] 条件判断/分支
    pSVar4 = pSVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar3 != 5) { // [自动静态注释] 条件判断/分支
      if (iVar3 != 3) { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 0x3a) = 1;
        iVar3 = *(int *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        cVar2 = *(char *)(param_1 + 0x3b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        goto joined_r0x0011aee0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      pSVar4 = (SixAxisSensorHandle *)(param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    nn::hid::StartSixAxisSensor(pSVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x3a) = 1;
    iVar3 = *(int *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    cVar2 = *(char *)(param_1 + 0x3b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto joined_r0x0011aee0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  pSVar4 = pSVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar3 == 5) { // [自动静态注释] 条件判断/分支
LAB__text__0011ae8c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    nn::hid::StopSixAxisSensor(pSVar4); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  else if (iVar3 == 3) { // [自动静态注释] 条件判断/分支
    pSVar4 = (SixAxisSensorHandle *)(param_1 + 0x1c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    goto LAB__text__0011ae8c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar3 = *(int *)(param_1 + 0x3c); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  cVar2 = *(char *)(param_1 + 0x3b); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x0011aee0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (cVar2 == '\0') { // [自动静态注释] 条件判断/分支
    if (iVar3 == 2) { // [自动静态注释] 条件判断/分支
      nn::hid::StopSixAxisSensor(pSVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (iVar3 == 2) { // [自动静态注释] 条件判断/分支
      nn::hid::StartSixAxisSensor(pSVar7); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar6 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined1 *)(param_1 + 0x3b) = uVar6;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


