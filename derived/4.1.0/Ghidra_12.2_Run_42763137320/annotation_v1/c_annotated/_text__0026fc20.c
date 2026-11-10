/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0016FC20
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0026fc20; name: FUN_.text__0026fc20
 */


void FUN__text__0026fc20(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__00132134(*(undefined8 *)(param_1 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((uVar2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    iVar1 = FUN__text__00132530(*(undefined8 *)(param_1 + 0x80)); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (iVar1 == 1) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(param_1 + 0x78) = 0;
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = (long *)(**(code **)*puVar5)(puVar5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = (long *)FUN__text__0012615c(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (plVar4 != plVar3) { // [自动静态注释] 条件判断/分支
        do { // [自动静态注释] 循环/迭代
          plVar3 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } while (plVar3 != plVar4 && plVar3 != (long *)0x0); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      *(undefined4 *)puVar5[0x13e] = 2;
      FUN__text__003236f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      local_34 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_48 = *(undefined8 *)(param_1 + 0x100); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uStack_40 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_38 = 0x1000100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x80) + 0x640) + 0x60); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      (**(code **)(*plVar3 + 8))(plVar3,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00131da0(*(undefined8 *)(param_1 + 0x80),&local_48); // [自动静态注释] 调用尚未恢复正式名称的函数
      FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x80),0); // [自动静态注释] 调用尚未恢复正式名称的函数
      *(undefined4 *)(param_1 + 0x78) = 5;
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


