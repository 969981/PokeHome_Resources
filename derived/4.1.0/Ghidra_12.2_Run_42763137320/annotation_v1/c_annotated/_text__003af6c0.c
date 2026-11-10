/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002AF6C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003af6c0; name: FUN_.text__003af6c0
 */


void FUN__text__003af6c0(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined4 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(char *)(param_1 + 0x850) != '\0') { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_1 + 0x800); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = FUN__text__003b7414(lVar2,*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x10)); // [自动静态注释] 调用尚未恢复正式名称的函数
    puVar3 = (undefined8 *)FUN__text__003b8e30(param_1 + 0x788,uVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      uStack_30 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_38 = &local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_28 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      FUN__text__003aa1c0(param_1,&local_38,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = local_28; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (local_28 != 0) { // [自动静态注释] 条件判断/分支
        plVar4 = (long *)(*(code *)**(undefined8 **)(local_28 + 0x50))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar5 = (long *)FUN__text__0012ea34(); // [自动静态注释] 调用尚未恢复正式名称的函数
        if (plVar5 != plVar4) { // [自动静态注释] 条件判断/分支
          do { // [自动静态注释] 循环/迭代
            plVar4 = (long *)*plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while (plVar4 != plVar5 && plVar4 != (long *)0x0); // [自动静态注释] 循环/迭代
          if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
            return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
          } // [自动静态注释] 作用域/控制流边界
        } // [自动静态注释] 作用域/控制流边界
        FUN__text__003a23f4(lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


