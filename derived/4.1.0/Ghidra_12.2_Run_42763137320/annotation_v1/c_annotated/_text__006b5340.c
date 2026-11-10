/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005B5340
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006b5340; name: FUN_.text__006b5340
 */


void FUN__text__006b5340(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN__text__006a0f24(*(undefined8 *)(param_1 + 0x20)); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar2 = *(undefined8 **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    (**(code **)*puVar2)(puVar2); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__006a0f24(puVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  lVar3 = *(long *)(param_1 + 0x38); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (*(long *)(lVar3 + 8) != 0) { // [自动静态注释] 条件判断/分支
    if (0 < *(int *)(lVar3 + 4)) { // [自动静态注释] 条件判断/分支
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        lVar1 = *(long *)(lVar3 + 8) + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (*(long *)(lVar1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__006a0f24(); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        *(undefined8 *)(lVar1 + 0x18) = 0;
        lVar5 = lVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = lVar4 + 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar1 + 0x10) = 0;
      } while (lVar5 < *(int *)(lVar3 + 4)); // [自动静态注释] 循环/迭代
      if (*(long *)(lVar3 + 8) == 0) goto LAB__text__006b5404; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__006a0f24(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
LAB__text__006b5404: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined8 *)(lVar3 + 8) = 0;
  *(undefined4 *)(lVar3 + 4) = 0;
  if (*(long *)(param_1 + 0x38) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006a0f24(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(undefined8 *)(param_1 + 0x38) = 0;
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


