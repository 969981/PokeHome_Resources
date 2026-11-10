/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004E3E10
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e3e10; name: FUN_.text__005e3e10
 */


void FUN__text__005e3e10(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  plVar5 = (long *)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__005e4600(param_1 + 0x118,*(long *)(param_1 + 0xf0) - *plVar5 >> 3); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar8 = *(undefined8 **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar4 = (undefined8 *)*plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((undefined8 *)*plVar5 != puVar8) { // [自动静态注释] 条件判断/分支
    do { // [自动静态注释] 循环/迭代
      do { // [自动静态注释] 循环/迭代
        puVar7 = puVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        puVar4 = (undefined8 *)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar6 = puVar4[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar2 = (long *)puVar4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar1 = puVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = puVar4[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)*puVar4)(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar2 + 0x18))(plVar2,uVar1,uVar3,uVar6); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(*plVar2 + 0x90))(plVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        puVar4 = puVar7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (puVar7 != puVar8); // [自动静态注释] 循环/迭代
      *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0xe8);
      if (*(long *)(param_1 + 0x118) == *(long *)(param_1 + 0x120)) break; // [自动静态注释] 条件判断/分支
      FUN__text__005e4600(plVar5,*(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 3); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__005e5010(plVar5,*(undefined8 *)(param_1 + 0xe8),*(long *)(param_1 + 0x118), // [自动静态注释] 调用尚未恢复正式名称的函数
                          *(long *)(param_1 + 0x120),
                          *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118) >> 3);
      *(undefined8 *)(param_1 + 0x120) = *(undefined8 *)(param_1 + 0x118);
      puVar4 = *(undefined8 **)(param_1 + 0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      puVar8 = *(undefined8 **)(param_1 + 0xf0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (puVar4 != puVar8); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


