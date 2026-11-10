/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EC620
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec620; name: FUN_.text__004ec620
 */


undefined8 FUN__text__004ec620(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  ushort uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004eb8dc(); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x280))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 != 0) { // [自动静态注释] 条件判断/分支
    uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar2 = FUN__text__004f41b8(*(undefined8 *)(param_1 + 0x78),uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
      if ((*(int *)(lVar2 + 300) == 3) && (lVar2 = FUN__text__004eda60(param_1,lVar2), lVar2 != 0)) // [自动静态注释] 条件判断/分支
      { // [自动静态注释] 作用域/控制流边界
        if (*(long *)(*(long *)(lVar2 + 0x50) + 0x138) != 0) { // [自动静态注释] 条件判断/分支
          FUN__text__004edd4c(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
        if (*(long *)(param_1 + 0x88) == 0) { // [自动静态注释] 条件判断/分支
          *(long *)(param_1 + 0x88) = lVar2;
          *(undefined8 *)(lVar2 + 0x70) = 0;
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          *(long *)(lVar2 + 0x70) = *(long *)(param_1 + 0x88);
          *(long *)(param_1 + 0x88) = lVar2;
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      uVar3 = uVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar1 != uVar3); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


