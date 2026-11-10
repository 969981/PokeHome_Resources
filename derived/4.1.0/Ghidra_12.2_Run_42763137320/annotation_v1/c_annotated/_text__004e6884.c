/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003E6884
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e6884; name: FUN_.text__004e6884
 */


undefined8 FUN__text__004e6884(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte bVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *__src; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *pbVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pbVar3 = *(byte **)(param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(byte **)(param_1 + 0x38) = pbVar3;
  if (pbVar3 == (byte *)0x0) goto LAB__text__004e6958; // [自动静态注释] 条件判断/分支
  __src = pbVar3 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(byte **)(param_1 + 0x38) = __src;
  bVar2 = *pbVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = bVar2 & 0x7f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(uint *)(param_1 + 0x40) = uVar4;
  if ((char)bVar2 < '\0') { // [自动静态注释] 条件判断/分支
    __src = pbVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x40) = uVar4 << 7;
    *(byte **)(param_1 + 0x38) = __src;
    bVar2 = pbVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar4 = bVar2 & 0x7f | uVar4 << 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(uint *)(param_1 + 0x40) = uVar4;
    if ((char)bVar2 < '\0') { // [自动静态注释] 条件判断/分支
      __src = pbVar3 + 3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar2 = pbVar3[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = bVar2 & 0x7f | uVar4 << 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0x40) = uVar4;
      if (-1 < (char)bVar2) goto LAB__text__004e6924; // [自动静态注释] 条件判断/分支
      __src = pbVar3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0x40) = uVar4 << 7;
      *(byte **)(param_1 + 0x38) = __src;
      bVar2 = pbVar3[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar4 = bVar2 & 0x7f | uVar4 << 7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar1 = uVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((char)bVar2 < '\0') { // [自动静态注释] 条件判断/分支
        uVar1 = 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(uint *)(param_1 + 0x40) = uVar1;
      if ((char)bVar2 < '\0') { // [自动静态注释] 条件判断/分支
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined4 *)(param_1 + 0x60) = 0xffffffff;
        *(undefined8 *)(param_1 + 100) = 0;
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      pbVar3 = *(byte **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pbVar3 <= __src) goto LAB__text__004e69b0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pbVar3 = *(byte **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (pbVar3 <= __src) goto LAB__text__004e69b0; // [自动静态注释] 条件判断/分支
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__004e6924: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    pbVar3 = *(byte **)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pbVar3 <= __src) { // [自动静态注释] 条件判断/分支
LAB__text__004e69b0: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(uint *)(param_1 + 0x60) = uVar4;
      *(undefined8 *)(param_1 + 100) = 0;
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  __n = (ulong)(uint)((int)pbVar3 - (int)__src) & 0xff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__src + 6 <= pbVar3) { // [自动静态注释] 条件判断/分支
    __n = 6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  memcpy((undefined4 *)(param_1 + 0x44),__src,__n); // [自动静态注释] 内存复制、清零或移动
LAB__text__004e6958: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(uint *)(param_1 + 0x60) = uVar4;
  *(undefined8 *)(param_1 + 100) = 0;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


