/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0035C500
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045c500; name: FUN_.text__0045c500
 */


float FUN__text__0045c500(long param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_60 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 uStack_31; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(undefined8 *)(param_1 + 0x170); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_50 = (undefined1 *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_48 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar1 = (undefined8 *)FUN__text__0045c9e0(auStack_60,uVar4,&uStack_31); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar1 == (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    fVar5 = 2.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *puVar1 = uVar4;
    lVar2 = FUN__text__0047a430(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8),auStack_60,0,param_2 // [自动静态注释] 调用尚未恢复正式名称的函数
                               ); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    fVar5 = 0.0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if ((lVar2 != 0) && (lVar3 = FUN__text__0047d7d0(*(undefined8 *)(param_1 + 0x170)), lVar3 != 0)) // [自动静态注释] 条件判断/分支
    { // [自动静态注释] 作用域/控制流边界
      FUN__text__00481048(lVar3,lVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
      fVar5 = (float)FUN__text__004791f8(*(undefined8 *)(*(long *)(param_1 + 0x150) + 8)); // [自动静态注释] 调用尚未恢复正式名称的函数
      fVar5 = fVar5 * 0.01; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if ((local_50 != (undefined1 *)0x0) && // [自动静态注释] 条件判断/分支
     (local_48 = local_48 & 0xffffffff00000000, local_50 != auStack_60)) { // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__00400fc0(4); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  return fVar5; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


