/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003CBEE4
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004cbee4; name: FUN_.text__004cbee4
 */


undefined8 FUN__text__004cbee4(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = param_2 + (ulong)(uint)(*(int *)(param_2 + 5) * 5); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = *(uint *)(lVar1 + 9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(ushort *)(param_1 + 0x28) = (ushort)*(byte *)(param_2 + 4);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(lVar1 + 0xd);
  uVar4 = FUN__text__004cc1ac(param_1 + 0x18,lVar1 + 0xe,(ulong)uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((int)uVar4 != 1) { // [自动静态注释] 条件判断/分支
    return uVar4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  pbVar5 = (byte *)(lVar1 + 0xe + (ulong)uVar2); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  __src = pbVar5 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  bVar3 = *pbVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (ulong)bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar3 == 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x30) == 0) goto LAB__text__004cbfac; // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(1); // [自动静态注释] 调用尚未恢复正式名称的函数
    pbVar5 = (byte *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __n = uVar6 * 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar1 = (uVar6 & 0xfc) + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar5 = (byte *)FUN__text__00400fa0(1,*(undefined8 *)(param_1 + 0x30),lVar1 + __n); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (pbVar5 == (byte *)0x0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *pbVar5 = bVar3;
    memcpy(pbVar5 + 1,__src,uVar6); // [自动静态注释] 内存复制、清零或移动
    memcpy(pbVar5 + lVar1,__src + uVar6,__n); // [自动静态注释] 内存复制、清零或移动
    __src = __src + uVar6 + __n; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(byte **)(param_1 + 0x30) = pbVar5;
LAB__text__004cbfac: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  bVar3 = *__src; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar6 = (ulong)bVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (bVar3 == 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)(param_1 + 0x38) == 0) { // [自动静态注释] 条件判断/分支
      return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__00400fc0(1); // [自动静态注释] 调用尚未恢复正式名称的函数
    pbVar5 = (byte *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    lVar1 = (uVar6 & 0xfc) + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    pbVar5 = (byte *)FUN__text__00400fa0(1,*(undefined8 *)(param_1 + 0x38),lVar1 + uVar6 * 8); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (pbVar5 == (byte *)0x0) { // [自动静态注释] 条件判断/分支
      return 0x34; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    *pbVar5 = bVar3;
    memcpy(pbVar5 + 1,__src + 1,uVar6); // [自动静态注释] 内存复制、清零或移动
    memcpy(pbVar5 + lVar1,__src + 1 + uVar6,uVar6 * 8); // [自动静态注释] 内存复制、清零或移动
  } // [自动静态注释] 作用域/控制流边界
  *(byte **)(param_1 + 0x38) = pbVar5;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


