/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003EB5B0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eb5b0; name: FUN_.text__004eb5b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004eb5b0(long param_1,long param_2,int param_3,long param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_170 [264]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_68 [5]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__004f6114(auStack_170,*(undefined8 *)(param_1 + 0x10),0); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (local_68[0] != 0) { // [自动静态注释] 条件判断/分支
    for (; param_3 != 0; param_3 = param_3 + -1) { // [自动静态注释] 循环/迭代
      (**(code **)(**(long **)(param_1 + 0x10) + 0xb8))(*(long **)(param_1 + 0x10),auStack_170,0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar1 = (long *)FUN__text__00400f80(0,0x28); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar2 = _DAT_008a5010; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined4 *)(plVar1 + 3) = 1;
      *plVar1 = lVar2 + 0x10;
      lVar2 = FUN__text__004f6970(auStack_170,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar2 = FUN__text__004f52d4(local_68,param_4 - lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      plVar1[1] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[4] = param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (*(long *)(local_68[0] + 0x10) == 0) { // [自动静态注释] 条件判断/分支
        *(long **)(local_68[0] + 0x10) = plVar1;
        uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        plVar1[2] = *(long *)(local_68[0] + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(long **)(local_68[0] + 0x10) = plVar1;
      } // [自动静态注释] 作用域/控制流边界
      goto LAB__text__004eb6a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
LAB__text__004eb6a0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__004f6174(auStack_170); // [自动静态注释] 调用尚未恢复正式名称的函数
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


