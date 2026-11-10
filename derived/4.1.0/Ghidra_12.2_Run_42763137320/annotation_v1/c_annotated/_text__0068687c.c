/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0058687C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0068687c; name: FUN_.text__0068687c
 */


int FUN__text__0068687c(long param_1,byte param_2,int param_3,undefined8 *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    iVar3 = -0x1f5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar4 = FUN__text__006809d4(param_1 + 0x890,0x98); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
      iVar3 = -0x385; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__00683bd8(); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar1 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar2 = param_4[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined1 *)(lVar4 + 0x71) = 0;
      *(byte *)(lVar4 + 0x70) = param_2 & 1;
      *(undefined8 *)(lVar4 + 0x60) = uVar1;
      *(undefined8 *)(lVar4 + 0x68) = uVar2;
      FUN__text__00683f20(lVar4,0,param_3); // [自动静态注释] 调用尚未恢复正式名称的函数
      iVar3 = FUN__text__0067ac40(param_1,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (iVar3 != 0) { // [自动静态注释] 条件判断/分支
        FUN__text__00683f3c(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__006809e4(param_1 + 0x890,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return iVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


