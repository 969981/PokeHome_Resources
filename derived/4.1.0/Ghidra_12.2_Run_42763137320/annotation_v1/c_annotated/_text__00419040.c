/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00319040
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00419040; name: FUN_.text__00419040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00419040(undefined8 param_1,undefined8 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_c0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_a8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint local_a0; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iStack_9c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_98; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_88; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_80 [8]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long local_78; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar1 = DAT_00aea228; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = (ulong)DAT_00aea228; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (DAT_00aea228 == 0 || DAT_00aea241 != '\0') { // [自动静态注释] 条件判断/分支
    FUN__text__00413dc8(param_1,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__00413b10(auStack_80,auStack_80 + (-0x40 - (uVar4 * 8 + 0xf & 0xffffffff0)),DAT_00aea228 // [自动静态注释] 调用尚未恢复正式名称的函数
                      ,0x711d83,1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if (0 < (int)uVar1) { // [自动静态注释] 条件判断/分支
    iVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      FUN__text__00412c50(&local_a0,local_78 + lVar6,0x10,8,0x713429,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
      puVar2 = (undefined8 *)CONCAT44(iStack_9c,local_a0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (puVar2 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        *puVar2 = 0x887558;
        *(int *)(puVar2 + 1) = iVar5;
      } // [自动静态注释] 作用域/控制流边界
      thunk_FUN__text__00413460(auStack_80,*(undefined8 *)(local_78 + lVar6)); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar6 = lVar6 + 8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      iVar5 = iVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar4 * 8 != lVar6); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  __s = auStack_80 + (-0x40 - (uVar4 * 8 + 0xf & 0xffffffff0)) + -(uVar4 + 0xf & 0x1fffffff0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(__s,0,uVar4); // [自动静态注释] 内存复制、清零或移动
  uVar3 = _DAT_008a4d70; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__004de5e0(&local_a0,_DAT_008a4d70); // [自动静态注释] 调用尚未恢复正式名称的函数
  while( true ) { // [自动静态注释] 循环/迭代
    FUN__text__004de734(&local_c0,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((local_88 == local_a8 && local_a0 == (uint)local_c0) && (iStack_9c == local_c0._4_4_)) // [自动静态注释] 条件判断/分支
    break; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    FUN__text__00413c5c(auStack_80,local_a0,iStack_9c); // [自动静态注释] 调用尚未恢复正式名称的函数
    __s[local_a0] = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__004de6b0(&local_a0); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  uVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (uVar1 < 2) { // [自动静态注释] 条件判断/分支
    uVar1 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  do { // [自动静态注释] 循环/迭代
    if (__s[uVar4] == '\0') { // [自动静态注释] 条件判断/分支
      FUN__text__00413c78(auStack_80,uVar4 & 0xffffffff,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    } // [自动静态注释] 作用域/控制流边界
    uVar4 = uVar4 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (uVar1 != uVar4); // [自动静态注释] 循环/迭代
  FUN__text__00413c90(&local_a0,auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  local_48 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00412c50(&local_c0,&local_48,0x10,8,0x70f008,0,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar3 = local_48; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (local_c0 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
    *local_c0 = 0x887580;
  } // [自动静态注释] 作用域/控制流边界
  local_48 = 0xffffffffffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  local_c0 = (undefined8 *)uVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  FUN__text__00413d68(param_1,&local_c0,1,local_98); // [自动静态注释] 调用尚未恢复正式名称的函数
  FUN__text__00413c20(auStack_80); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


