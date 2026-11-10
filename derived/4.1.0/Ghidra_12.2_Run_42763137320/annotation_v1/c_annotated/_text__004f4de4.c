/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003F4DE4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4de4; name: FUN_.text__004f4de4
 */


undefined4 // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
FUN__text__004f4de4(long *param_1,undefined8 param_2,undefined8 param_3,int param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                   undefined4 *param_5,uint param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_5c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_34 [4]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  *param_5 = 0;
  iVar1 = FUN__text__004f4810(param_1[0x12]); // [自动静态注释] 调用尚未恢复正式名称的函数
  iVar2 = FUN__text__004f47f4(param_1[0x12]); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_4 < iVar2 + iVar1) && // [自动静态注释] 条件判断/分支
     (lVar4 = FUN__text__004f3f10(param_1[0x12],param_1,param_2,param_3,param_6 & 1), lVar4 != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar5 = FUN__text__004f55c8(param_1,0,lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__004eb980(lVar4); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (lVar5 != 0) { // [自动静态注释] 条件判断/分支
      param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_5c = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_58 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_54 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      local_60 = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_60,param_5,auStack_34,0,0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
        iVar1 = FUN__text__004f4810(param_1[0x12]); // [自动静态注释] 调用尚未恢复正式名称的函数
        iVar2 = FUN__text__004f47f4(param_1[0x12]); // [自动静态注释] 调用尚未恢复正式名称的函数
        FUN__text__004e9dd4(lVar5,0,4,iVar2 + iVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar3 = FUN__text__004f4810(param_1[0x12]); // [自动静态注释] 调用尚未恢复正式名称的函数
        lVar4 = FUN__text__004f55c8(param_1,uVar3,0); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        if (lVar4 == 0) { // [自动静态注释] 条件判断/分支
          uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


