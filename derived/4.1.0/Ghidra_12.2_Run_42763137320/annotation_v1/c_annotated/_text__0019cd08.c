/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0009CD08
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019cd08; name: FUN_.text__0019cd08
 */


void FUN__text__0019cd08(long param_1,undefined8 *param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  MutexType *pMVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  pMVar1 = (MutexType *)(param_1 + 0x458); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  nn::os::LockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((param_3 & 1) == 0) { // [自动静态注释] 条件判断/分支
    uVar4 = FUN__text__0019c518(param_1 + 0x388,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    if ((uVar4 & 1) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 0x3f0) = *param_2;
      uVar2 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x410) = param_2[4];
      *(undefined8 *)(param_1 + 0x408) = uVar5;
      *(undefined8 *)(param_1 + 0x400) = uVar6;
      *(undefined8 *)(param_1 + 0x3f8) = uVar2;
      uVar2 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x430) = param_2[8];
      *(undefined8 *)(param_1 + 0x428) = uVar5;
      *(undefined8 *)(param_1 + 0x420) = uVar6;
      *(undefined8 *)(param_1 + 0x418) = uVar2;
      uVar2 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = *(undefined4 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x438) = param_2[9];
      *(undefined4 *)(param_1 + 0x450) = uVar3;
      *(undefined8 *)(param_1 + 0x448) = uVar5;
      *(undefined8 *)(param_1 + 0x440) = uVar2;
      *(undefined1 *)(param_1 + 0x454) = 1;
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(param_1 + 0x454) != '\0') { // [自动静态注释] 条件判断/分支
      if (*(char *)(param_1 + 0x455) == '\0') { // [自动静态注释] 条件判断/分支
        *(undefined1 *)(param_1 + 0x454) = 0;
        nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(param_1 + 0x3f0) = *param_2;
      uVar2 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x410) = param_2[4];
      *(undefined8 *)(param_1 + 0x408) = uVar5;
      *(undefined8 *)(param_1 + 0x400) = uVar6;
      *(undefined8 *)(param_1 + 0x3f8) = uVar2;
      uVar2 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(param_1 + 0x430) = param_2[8];
      *(undefined8 *)(param_1 + 0x428) = uVar5;
      *(undefined8 *)(param_1 + 0x420) = uVar6;
      *(undefined8 *)(param_1 + 0x418) = uVar2;
      uVar2 = param_2[9]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar6 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined4 *)(param_1 + 0x450) = *(undefined4 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0x448) = uVar6;
      *(undefined8 *)(param_1 + 0x440) = uVar5;
      *(undefined8 *)(param_1 + 0x438) = uVar2;
      nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    *(undefined8 *)(param_1 + 0x3f0) = *param_2;
    uVar2 = param_2[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = param_2[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = param_2[3]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x410) = param_2[4];
    *(undefined8 *)(param_1 + 0x408) = uVar5;
    *(undefined8 *)(param_1 + 0x400) = uVar6;
    *(undefined8 *)(param_1 + 0x3f8) = uVar2;
    uVar2 = param_2[5]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = param_2[6]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = param_2[7]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x430) = param_2[8];
    *(undefined8 *)(param_1 + 0x428) = uVar5;
    *(undefined8 *)(param_1 + 0x420) = uVar6;
    *(undefined8 *)(param_1 + 0x418) = uVar2;
    uVar2 = param_2[10]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar5 = param_2[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = *(undefined4 *)(param_2 + 0xc); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(param_1 + 0x438) = param_2[9];
    *(undefined4 *)(param_1 + 0x450) = uVar3;
    *(undefined8 *)(param_1 + 0x448) = uVar5;
    *(undefined8 *)(param_1 + 0x440) = uVar2;
    *(undefined2 *)(param_1 + 0x454) = 0x101;
  } // [自动静态注释] 作用域/控制流边界
  nn::os::UnlockMutex(pMVar1); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


