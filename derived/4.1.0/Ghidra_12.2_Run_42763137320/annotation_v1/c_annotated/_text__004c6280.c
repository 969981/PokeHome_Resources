/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C6280
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c6280; name: FUN_.text__004c6280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004c6280(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_34; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_18; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  local_34 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  iVar2 = (**(code **)(*param_1 + 0x80))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (iVar2 == 3) { // [自动静态注释] 条件判断/分支
    local_18 = param_2 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = FUN__text__004aa918(&local_18,&local_34,auStack_60); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((int)uVar4 == 1) { // [自动静态注释] 条件判断/分支
      if (local_48 == 0) { // [自动静态注释] 条件判断/分支
        FUN__text__004c5960(param_1 + 0x1e,local_5c,CONCAT44(uStack_54,local_58),uStack_50); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        FUN__text__004c5a3c(param_1 + 0x1e,local_58); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      uVar4 = FUN__text__004684a0(param_1,&local_18,&local_34,param_5 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = param_1[4]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = *_DAT_008a4630; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = (**(code **)(*param_1 + 0x80))(param_1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004aab84(uVar4,(int)lVar1,3,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar4 = 0x5b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


