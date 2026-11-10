/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034F220
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044f220; name: FUN_.text__0044f220
 */


void FUN__text__0044f220(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar5 = *(undefined8 *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(undefined8 *)(param_2 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_2 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  uVar5 = *(undefined8 *)(param_2 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar8 = *(undefined8 *)(param_2 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = *(undefined8 *)(param_2 + 0x48); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(undefined8 *)(param_1 + 0x38) = uVar8;
  uVar5 = *(undefined8 *)(param_2 + 0x50); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  uVar4 = *(uint *)(param_2 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(uint *)(param_1 + 0x6c) < uVar4) { // [自动静态注释] 条件判断/分支
    lVar6 = **(long **)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(param_1 + 0x60) == 0) { // [自动静态注释] 条件判断/分支
      lVar6 = (**(code **)(lVar6 + 0x10)) // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
                        (*(long **)(param_1 + 0x58),(ulong)uVar4 * 0x18,0x70d345,0xcc); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (lVar6 == 0) goto LAB__text__0044f344; // [自动静态注释] 条件判断/分支
      if ((*(long *)(param_1 + 0x60) != 0) && (*(long *)(param_1 + 0x60) != lVar6)) { // [自动静态注释] 条件判断/分支
        (**(code **)(**(long **)(param_1 + 0x58) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar6 = (**(code **)(lVar6 + 0x28))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar6 == 0) goto LAB__text__0044f344; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    *(long *)(param_1 + 0x60) = lVar6;
    *(uint *)(param_1 + 0x6c) = uVar4;
  } // [自动静态注释] 作用域/控制流边界
  *(uint *)(param_1 + 0x68) = uVar4;
  if (*(int *)(param_2 + 0x68) != 0) { // [自动静态注释] 条件判断/分支
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar7 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      uVar7 = uVar7 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x60) + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x60) + lVar6); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar6 = lVar6 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar8 = puVar1[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[1] = puVar1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar2[2] = uVar8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *puVar2 = uVar5;
    } while (uVar7 < *(uint *)(param_2 + 0x68)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
LAB__text__0044f344: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x80); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*(long *)(param_1 + 0x80) != 0) && (*(char *)(param_1 + 0x88) != '\0')) { // [自动静态注释] 条件判断/分支
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined1 *)(param_1 + 0x88) = 0;
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x80) = uVar5;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0x90);
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


