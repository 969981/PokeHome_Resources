/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0054FB7C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064fb7c; name: FUN_.text__0064fb7c
 */


void FUN__text__0064fb7c(long *param_1,undefined4 param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint *puVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_2c0 [128]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_240 [256]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_140 [256]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_24; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(int *)((long)param_1 + 0xbc) == 2) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  memset(auStack_140,0,0x100); // [自动静态注释] 内存复制、清零或移动
  memset(auStack_240,0,0x100); // [自动静态注释] 内存复制、清零或移动
  if ((*(uint *)((long)param_1 + 0x3fc) & 0x8000002) == 0) { // [自动静态注释] 条件判断/分支
    memset(auStack_2c0,0,0x80); // [自动静态注释] 内存复制、清零或移动
    local_24 = 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    iVar1 = nnsocketGetPeerName(param_2,auStack_140,&local_24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
      local_24 = 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      memset(auStack_240,0,0x100); // [自动静态注释] 内存复制、清零或移动
      iVar1 = nnsocketGetSockName(param_2,auStack_240,&local_24); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (iVar1 == 0) { // [自动静态注释] 条件判断/分支
        uVar7 = FUN__text__0064fda0(auStack_140,(void *)((long)param_1 + 0x1a2),param_1 + 0x3a); // [自动静态注释] 调用尚未恢复正式名称的函数
        if ((uVar7 & 1) == 0) { // [自动静态注释] 条件判断/分支
          puVar4 = (uint *)__errno_location(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = (ulong)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = FUN__text__0066c474(uVar7,auStack_2c0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar5 = 0x7180b1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          memcpy(param_1 + 0x11,(void *)((long)param_1 + 0x1a2),0x2e); // [自动静态注释] 内存复制、清零或移动
          uVar7 = FUN__text__0064fda0(auStack_240,param_1 + 0x3b,param_1 + 0x41); // [自动静态注释] 调用尚未恢复正式名称的函数
          if ((uVar7 & 1) != 0) { // [自动静态注释] 条件判断/分支
            lVar6 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            goto LAB__text__0064fbe4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
          } // [自动静态注释] 作用域/控制流边界
          puVar4 = (uint *)__errno_location(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar7 = (ulong)*puVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar3 = FUN__text__0066c474(uVar7,auStack_2c0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
          uVar5 = 0x71e9f3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        uVar2 = nnsocketGetLastErrno(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar7 = uVar2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = FUN__text__0066c474(uVar2,auStack_2c0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
        uVar5 = 0x70b1c7; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      uVar2 = nnsocketGetLastErrno(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar7 = uVar2 & 0xffffffff; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar3 = FUN__text__0066c474(uVar2,auStack_2c0,0x80); // [自动静态注释] 调用尚未恢复正式名称的函数
      uVar5 = 0x71a39b; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__0066713c(lVar6,uVar5,uVar7,uVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
LAB__text__0064fbe4: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    memcpy((void *)(lVar6 + 0x1648),(void *)((long)param_1 + 0x1a2),0x2e); // [自动静态注释] 内存复制、清零或移动
    memcpy((void *)(*param_1 + 0x1680),param_1 + 0x3b,0x2e); // [自动静态注释] 内存复制、清零或移动
    *(undefined8 *)(*param_1 + 0x16b8) = *(undefined8 *)param_1[0x84];
    *(undefined4 *)(*param_1 + 0x16c0) = *(undefined4 *)(param_1[0x84] + 0x80);
    *(long *)(*param_1 + 0x1678) = param_1[0x3a];
    *(long *)(*param_1 + 0x16b0) = param_1[0x41];
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


